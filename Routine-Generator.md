# 🗓 CSE-56/5 Routine Display Program (C++)

## Project Description
This **C++ console program** displays the **daily class routine** for CSE-56/5 based on the current day of the week.  
It uses the `<ctime>` library to automatically determine the current weekday and shows the scheduled classes with their timings and room numbers.  

---

## Objectives
- Automatically determine the current day using system time  
- Display the class schedule for CSE-56/5  
- Show class timings and room numbers  
- Handle weekends with a friendly message  

---

## Tools & Technologies
- **Programming Language:** C++  
- **Compiler:** GCC / CodeBlocks / Visual Studio  
- **Library Used:** `<ctime>`  

---

## Program Workflow
1. Retrieve the current system time using `time()`  
2. Convert it to local time using `localtime()`  
3. Map numeric weekday values to a string array of day names  
4. Compare current day and display the corresponding routine  
5. If it's Friday or Saturday, show a no-class message  

---

## Features
- Automatically detects the current day  
- Displays class schedule with start and end times  
- Shows room numbers for each class  
- Includes break periods in the schedule  
- Friendly message for days with no classes  

---

## Limitations
- Console-based only, no GUI  
- Only for the CSE-56/5 batch  
- Schedule is hard-coded; changes require editing the source code  
- No user input or interactive features  

---

## Future Enhancements
- Make the program support multiple batches or routines  
- Allow user to input or update schedule dynamically  
- Include color coding for breaks, labs, or practicals  
- Integrate with calendar APIs for automatic updates  

---

## Learning Outcomes
- Practical understanding of **system time in C++**  
- Hands-on experience with `<ctime>` functions  
- Familiarity with arrays and string comparison  
- Improved console-based programming skills  
- Experience implementing a simple weekday-based logic  

---

## Author
**Argho**  
CSE Student  
Bangladesh University Of Business and Technology
