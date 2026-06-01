# \# Cash Withdrawal Note Calculator (C)

# 

# A simple C program that calculates the number of currency notes required for a given withdrawal amount using the denominations:

# 

# \* 5000

# \* 1000

# \* 500

# \* 100

# 

# The program breaks down the entered amount into the minimum number of notes using a greedy approach.

# 

# \## Features

# 

# \* Accepts a withdrawal amount from the user.

# \* Calculates the number of notes for each denomination.

# \* Displays a formatted summary table.

# \* Easy to understand and suitable for C programming beginners.

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

# &#x20;   Number of Notes Clarification

# \-------------------------------------

# &#x20;     5000 Notes =      2

# &#x20;     1000 Notes =      2

# &#x20;      500 Notes =      1

# &#x20;      100 Notes =      1

# \-------------------------------------

# ```

# 

# \## How It Works

# 

# The program:

# 

# 1\. Divides the withdrawal amount by 5000 to determine the number of 5000 notes.

# 2\. Subtracts the value of those notes from the total amount.

# 3\. Repeats the process for 1000, 500, and 100 notes.

# 4\. Displays the final note count.

# 

# 

