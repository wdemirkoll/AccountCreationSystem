# Account Creation System

Short Description 💬
-----------------
Console simple account manager — a minimal, console-based account registration/login demo implemented in C++. The program lets a user register credentials, log in, view current (in-memory) account info, delete the account, and exit. It demonstrates basic I/O and simple state handling in C++.

Announcement 📢
------------
This project is written using C++17.

Features ✅
--------
- Register a username and password 🆔🔒  
- Login with stored credentials ✅  
- Delete account (clears stored username/password) 🗑️  
- Simple info display showing current in-memory username and password (for demo/testing) ℹ️  
- Menu-driven CLI with Register / Login / Delete / Exit options 🧭

Example usage / sample session 💡
------------------------------
A short example flow (user input shown after prompts):

```
=======================
Username:
Password:
=======================
[1] - Register
[2] - Login
[3] - Delete Account
[4] - Exit
Choose: 1
Create a username: alice
Create a password: secret

=======================
Username: alice
Password: secret
=======================
Choose: 2
Enter your username: alice
Enter your password: secret
Logged in!
Choose: 3
// Account deleted (username and password cleared)
Choose: 4
// Program exits
```

Notes and limitations ⚠️
---------------------
- Credentials are stored only in memory (no file or database) and are lost when the program exits.  
- The program displays the stored password in plain text on the Info screen — this is insecure and only intended for demonstration/testing. Do not do this in production.  
- Input validation is minimal; unexpected or malformed input may cause undesired behavior.  
- No protection against empty usernames/passwords, no hashing, no retries/lockouts, and no persistence.  

Author 👤
------
wdemirkoll — GitHub: @wdemirkoll

📅 January 2026
