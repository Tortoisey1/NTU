import matplotlib.pyplot as plt
import pandas as pd
import statsmodels.api as sm
import os

# Set the initial directory to the current working directory
current_directory = os.getcwd()

# Change the directory to the parent folder and then to the Datasets folder
os.chdir(os.path.join(current_directory, '..', 'Datasets'))

# Set the file name
file_name = 'Growth.dta'

# Get the full file path
file_path = os.path.join(os.getcwd(), file_name)

# Read the data file
df = pd.read_stata(file_path)


# Print the first 5 rows of the dataframe
print(df.head(5))

print("\n\n\n")


# part a

# Scatter plot of growth vs. tradeshare
plt.scatter(df['tradeshare'], df['growth'],
            color='blue', edgecolor='k', alpha=0.7)
plt.xlabel('Trade Share')
plt.ylabel('Average Annual Growth Rate')
plt.title('Scatter Plot of Growth vs. Trade Share')
plt.show()


# part b


# Define the dependent and independent variables
X = df[['tradeshare', 'yearsschool', 'rev_coups', 'assasinations', 'rgdp60']]
y = df['growth']

# Add a constant to the independent variables
X = sm.add_constant(X)

# Run the multiple regression
model = sm.OLS(y, X).fit()

# Display the regression results
print(model.summary())
