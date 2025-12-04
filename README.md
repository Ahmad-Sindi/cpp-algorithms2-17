# Algorithm Challenge #17 – Guess a 3-Letter Password (AAA → ZZZ)
-

🧮 Problem Description
-
This program asks the user to enter a 3-letter uppercase password, then attempts
to guess it using a brute-force approach.

The algorithm generates every possible 3-letter combination from AAA to ZZZ and
compares each attempt to the original password.

To accomplish this, the algorithm:

1️⃣ Iterates through all letters from A to Z  
2️⃣ Builds every possible 3-letter sequence  
3️⃣ Compares each sequence with the entered password  
4️⃣ Reports how many attempts were needed to find it  

💡 What You’ll Learn
-
Brute-force password search 
ASCII character manipulation  
Nested loop logic  
String comparison  
Attempt counting and progress tracking  
Understanding algorithmic complexity (26³ = 17,576 attempts)

🧩 Example
-
Input:  
ABC

Output (shortened):  
Trial [1] : AAA  
Trial [2] : AAB  
...  
Trial [29] : ABC  

Password Found: ABC  
Found after 29 trial(s)

📂 File Information
-
Language: C++  
File Name: guess_3letter_password.cpp  
Challenge Number: #17  

💬 Notes
-
This challenge is a great introduction to brute-force search strategies.  
It clearly demonstrates time complexity and why brute-force is not practical
for real-world password systems.

🔗 GitHub Repository
-
www.linkedin.com/in/ahmad-sindi-61550b325

🏷️ Tags
-
#Cpp #Algorithms #BruteForce #PasswordCracking  
#NestedLoops #Combinatorics #CodingChallenge  
#ProblemSolving #LogicBuilding #CleanCode #STEM  
#LearnToCode #DeveloperJourney #CodeNewbie
