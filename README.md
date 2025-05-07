# 2D Translation Algorithm

**Translation** is a process in which the position of an object in a 2D plane is moved from its original position to a new position based on a given translation vector. Below is the step-by-step algorithm to perform the 2D translation operation.

## **Algorithm for 2D Translation**

### **Input:**
- Initial coordinates of the object: 
  \( (X_{\text{old}}, Y_{\text{old}}) \)
  
- Translation vector: 
  \( (T_x, T_y) \)
  - \( T_x \): The shift in the X direction
  - \( T_y \): The shift in the Y direction

### **Output:**
- Translated coordinates of the object:
  \( (X_{\text{new}}, Y_{\text{new}}) \)

---

### **Steps:**

#### 1. **Define the Coordinates:**
   - Let the initial point \( O \) have coordinates \( (X_{\text{old}}, Y_{\text{old}}) \).
   - Let the translation vector be given by \( (T_x, T_y) \), where:
     - \( T_x \): The translation along the X-axis.
     - \( T_y \): The translation along the Y-axis.

#### 2. **Translation Formula:**
   After applying the translation, the new coordinates of the point \( O \) can be computed as:
   - \( X_{\text{new}} = X_{\text{old}} + T_x \)  *(Translation towards the X-axis)*
   - \( Y_{\text{new}} = Y_{\text{old}} + T_y \)  *(Translation towards the Y-axis)*

#### 3. **Perform the Translation:**
   - **Update the position** by adding the translation values to the original coordinates:
     - \( X_{\text{new}} = X_{\text{old}} + T_x \)
     - \( Y_{\text{new}} = Y_{\text{old}} + T_y \)

#### 4. **Output the Result:**
   - The new coordinates \( (X_{\text{new}}, Y_{\text{new}}) \) are the translated position of the point \( O \).

---

## **Summary of the Algorithm:**

1. **Input:**
   - Initial coordinates of the object \( (X_{\text{old}}, Y_{\text{old}}) \)
   - Translation vector \( (T_x, T_y) \)
   
2. **Steps:**
   - Compute the new coordinates using the translation formulas:
     - \( X_{\text{new}} = X_{\text{old}} + T_x \)
     - \( Y_{\text{new}} = Y_{\text{old}} + T_y \)

3. **Output:**
   - The translated coordinates \( (X_{\text{new}}, Y_{\text{new}}) \)
