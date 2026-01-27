*This project has been created as part of the 42 curriculum by pdos-san*

# Description

Born2beroot is a system administration project from 42 that aims to introduce students to virtualization,Linux system installation, and basic server configuration. The goal is to create a secure and stable virtual machine by following strict rules related to security, users, permissions, and services.

Through this project, we learn how to install and configure a Linux operating system from scratch, manage users and groups, apply security policies, and understand how a system works at a low level.

## Instructions

To complete the Born2beroot project, the following steps were performed:
	1.	Virtual Machine Setup
	•	Create a virtual machine using VirtualBox (or UTM).
	•	Install Debian as the operating system.
	2.	System Installation
	•	Configure partitions using LVM.
	•	Set hostname according to the project rules.
	•	Install only the necessary packages (no graphical interface).
	3.	User and Group Management
	•	Create a main user.
	•	Create and configure groups such as sudo.
	•	Add the user to the appropriate groups.
	4.	Password Policy
	•	Configure strong password rules using PAM.
	•	Set password expiration and complexity requirements.
	5.	Sudo Configuration
	•	Install and configure sudo.
	•	Restrict sudo usage according to the subject.
	•	Configure logging and secure paths.
	6.	Firewall (UFW)
	•	Install and enable UFW.
	•	Allow only required ports (SSH).
	7.	SSH Configuration
	•	Install and configure SSH.
	•	Change the default SSH port.
	•	Disable root login via SSH.
	8.	Monitoring Script
	•	Create a monitoring script (monitoring.sh).
	•	Display system information such as CPU, RAM, disk usage, and logged users.
	•	Configure a cron job to run the script periodically.

## Resources

The following resources were used during the development of this project:
- Debian Official Documentation
- Linux man pages (man sudo, man passwd, man sshd, man cron)
- 42 Intranet Born2beroot Subject
- GNU/Linux PAM documentation
- VirtualBox Documentation

## Project description

Debian was chosen for this project because it is known for its stability, security, and strong community support. It follows strict package management rules and provides long-term support, which makes it ideal for a server-oriented environment.

Additionally, Debian is widely used in production servers, making it a great choice for learning real-world system administration concepts. Its minimal installation option allows full control over installed services, which aligns perfectly with the goals of the Born2beroot project.
