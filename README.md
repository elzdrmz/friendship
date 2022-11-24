# exam

# About

This project was written using the c++ language, it is a single input prompt containing an integer corresponding to a friend's recommendation:
The ID of the user to be friended with.

# Technologies

Project is created with:
* visual Studio 2022 version 17.4

# Dataset

In each line of the file containing this dataset, there are two integer values and these
integer values are separated by the horizontal tab character (\t). Here, each integer
value represents the IDs of the users. Hence, each line has the format given below,
where user1 represents the ID of the first user, user2 represents the ID of the second
user and \t is the tab character:

user1\tuser2

# Test

When the ID is get from the user, the output is the ID of the suggested friends. 

The input user ID does not appear in the prepared dataset
file, then the program will prompt “There is no such user”.

If ID is not in data :

<img width="301" alt="image" src="https://user-images.githubusercontent.com/74271265/203777466-f0296233-6eaa-434e-8b4d-f5b71102a9a8.png">

The input user does not have any 2nd degree friends, then the program
can prompt “There is no friend to suggest” as the output.
If ID is in data but no friend to suggest:

<img width="245" alt="image" src="https://user-images.githubusercontent.com/74271265/203777658-a24a0d2b-728c-43ac-91c4-83eebe1d1866.png">

Example ID 77 friend recommendation is  ID 280 

<img width="259" alt="image" src="https://user-images.githubusercontent.com/74271265/203779042-6b7b9574-619d-434b-8060-12bd79e86854.png">

# More Example
        
Dataset :user1--- user2
          1 ---    3
          1     4
          1     5
          3     8
          3     6
          4     6
          4     7
          5     7
          8     2
          6     2

If input is 1 the program listing like that 1-3-6, 1-3-8, 1-4-6, 1-4-7, 1-5-7 and in such a scenario, ID 6 and ID 7 will be the friends to be
suggested for ID 1.


                                            




