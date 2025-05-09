# 2D Translation Algorithm

**Translation** is a process in which the position of an object in a 2D plane is moved from its original position to a new position based on a given translation vector. Below is the step-by-step algorithm to perform the 2D translation operation.

## **Algorithm for 2D Translation**

1. Start the graphics mode using `initgraph()`.
2. Set background color (e.g., white) and clear the screen.
3. Define the coordinates of the original rectangle (`x1`, `y1`, `x2`, `y2`).
4. Ask the user to input translation values `tx` and `ty`.
5. Draw the original rectangle and label it.
6. Apply translation:
   - New coordinates:
     - `x1' = x1 + tx`
     - `y1' = y1 + ty`
     - `x2' = x2 + tx`
     - `y2' = y2 + ty`
7. Draw the translated rectangle using the new coordinates and label it.
8. Wait for user input, then close the graphics window.

---

## Output:
**Visualization of 2D translation for Rectangle:**

![2D Translation Output]
(path/to/your/output_image.png)
