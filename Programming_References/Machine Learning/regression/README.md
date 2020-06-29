# Regression Models
Use regression analysis to describe the relationships between a set of independent variables and a dependent variable.

We can use training data to train a regression model to approximate a predicted value.

### Example of a Regression Model
If we want to predict the salary of a person based on age, a regression model would be an ideal ML model to do this.

We can model age (independent model) against salary (dependent variable) by fitting the data through a regression model.

Once the data is fitted through the model, we can predict the salary a person earns based off their age.

# Model Selection
**If the problem is linear:**
* Simple Linear Regression
    * When you have 1 feature (single independent variable)
* Multiple Linear Regression
    * When you have several features (several independent variables)
* Polynomial Regression
    * When the dependent value grows like a polynomial curve
* Support Vector Machine (RBF Linear)
    * When you want to adapt your predictions to your data set
    
**If the problem is linear:**
* Decision Tree Regression
    * When you want a clear interpretation of results
* Random Forest Regression
    * When you want a high performance, with less need for interpretation
* Support Vector Regression (RBF Kernel)
    * When you want to adapt your predictions to your data set
    
If you're unsure what model to use, perform a k-Fold Cross Validation and use the model that shows the best results

If you want to improve your model's performace, perform hyperparameter tuning.
    
