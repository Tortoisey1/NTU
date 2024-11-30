import pandas as pd
import statsmodels.api as sm
import os

# Set the initial directory to the current working directory
current_directory = os.getcwd()

# Change the directory to the parent folder and then to the Datasets folder
os.chdir(os.path.join(current_directory, '..', 'Datasets'))

# Set the file name
file_name = 'cps08.dta'

# Get the full file path
file_path = os.path.join(os.getcwd(), file_name)

# Read the data file
df = pd.read_stata(file_path)


# Print the first 5 rows of the dataframe
print(df.head(5))


# for part a

# Define the dependent and independent variables
X_a = df['age']
y_a = df['ahe']

# Add a constant to the independent variable
X_a = sm.add_constant(X_a)

# Fit the model
model_a = sm.OLS(y_a, X_a).fit()

# Print the summary to see the estimated effect of age on earnings
print("Part a regression:")
print(model_a.summary())
print("\n\n")

# for part b
# Define the dependent and independent variables
X_b = df[['age', 'female', 'bachelor']]
y_b = df['ahe']

# Add a constant to the independent variable
X_b = sm.add_constant(X_b)

# Fit the model
model_b = sm.OLS(y_b, X_b).fit()

# Print the summary to analyze the t-test, p-value, and confidence interval for β1 (age)
print("Part b regression")
print(model_b.summary())
