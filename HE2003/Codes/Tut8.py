import pandas as pd
import statsmodels.api as sm
import os

# Set the initial directory to the current working directory
current_directory = os.getcwd()

# Change the directory to the parent folder and then to the Datasets folder
os.chdir(os.path.join(current_directory, '..', 'Datasets'))

# Set the file name
file_name = 'birthweight_smoking.dta'

# Get the full file path
file_path = os.path.join(os.getcwd(), file_name)

# Read the data file
df = pd.read_stata(file_path)

# Print the first 5 rows of the dataframe
print(df.head(5))

# part a
# Independent variable (smoker)
X_a = df['smoker']
X_a = sm.add_constant(X_a)  # Adds a constant term to the model

# Dependent variable (birthweight)
y = df['birthweight']

# Perform OLS regression
model_a = sm.OLS(y, X_a).fit()

# Print the results for Part (a)
print("Part (a): Regression of birthweight on smoker")
# Print the summary of the regression
print(model_a.summary())

print("\n\n\n\n")

# part b
# Independent variables (smoker and nprevisit)
X_b = df[['smoker', 'nprevist']]
X_b = sm.add_constant(X_b)

# Perform OLS regression
model_b = sm.OLS(y, X_b).fit()


print("Part (b): Regress “birthweight” on “smoker” and “nprevisit” ")
# Print the summary of the regression
print(model_b.summary())


# Check correlation between smoker and nprevisit
correlation = df[['smoker', 'nprevist']].corr()
print("Show the sign of the potential omitted variable bias of the regression with the single regressor \“smoker\"")
print(correlation)

print("\n\n\n\n")


# part c
# Jane's data: smoked (1) and had 8 prenatal visits
jane_data = pd.DataFrame({'const': 1, 'smoker': [1], 'nprevist': [8]})

# Predict birthweight for Jane's child
jane_pred = model_b.predict(jane_data)
print(
    f"Part (c): Predicted birthweight for Jane's child: {jane_pred[0]} grams")
