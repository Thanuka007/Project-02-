# \# ATM Cash Withdrawal Note Calculator

# 

# \## Description

# 

# This C program calculates the minimum number of currency notes required for a given withdrawal amount.

# 

# The program breaks down the entered amount into:

# 

# \* 5000 notes

# \* 1000 notes

# \* 500 notes

# \* 100 notes

# 

# using integer division and remainder calculations.

# 

# \---

# 

# \## Features

# 

# \* Accepts a withdrawal amount from the user.

# \* Calculates the number of notes needed for each denomination.

# \* Displays the note breakdown in a formatted table.

# \* Uses the largest denominations first to minimize the total number of notes.

# 

# \---

# 

# \## Example

# 

# \### Input

# 

# ```

# Please Enter Withdraw Amount: 12600

# ```

# 

# \### Output

# 

# ```

# \-------------------------------------

# &#x20;  Number of Notes Clarification

# \-------------------------------------

# &#x20;     5000 Notes =      2

# &#x20;     1000 Notes =      2

# &#x20;      500 Notes =      1

# &#x20;      100 Notes =      1

# \-------------------------------------

# ```

# 

# \---

# 

# \## How It Works

# 

# 1\. Divide the amount by 5000 to find the number of 5000 notes.

# 2\. Subtract the value represented by those notes.

# 3\. Repeat the process for 1000, 500, and 100 notes.

# 4\. Display the final note count.

# 

# 

