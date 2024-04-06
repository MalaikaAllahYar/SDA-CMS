#include <iostream>
#include <map>
#include<list>
using namespace std;

class CampusMAngmentSystem
{
private:
	CampusMAngmentSystem();//private constructor
	static CampusMAngmentSystem* inst_; // private static pointer
public:
	CampusMAngmentSystem* getInstance();//public method which return the same class object

};
class Student {
private: 
	Student();// private class constructor
	string studentId;
	string studentName;
	static Student* inst_; // private static pointer

public:
	void viewAttendance();
	void viewGrades();
	void viewTranscript();
	Student* getInstance();// public   method  which return the same class object 


};
class Course {
private :
	string courseId;
	string CourseName;
	list<Student> StudentEnrollment;
	Course();//private constructor
	static Course* inst__;//private static pointer
public:
	Course* getinstance();//public method which return the same class object




};
class Faculity {

private :
	string faculityid;
	string FaculityName;
	list<Course> courseTaught;
	Faculity();//private constructor
	static Faculity* inst_;//private static pointer

public:
	Faculity* getinstance();// //public method which return the same class object


};

class attendanceTracker {
private:
	attendanceTracker();//private constructor
	static attendanceTracker* inst__;///private static pointer
    string	attendanceData;

public:
	attendanceTracker* getinstance();//public method which return the same class object
	void recordAttendance(int studentId, string data);
	void genetateAttendanceReport();
};

class GPAcalculator {
private :
	GPAcalculator();//private constructor
	static GPAcalculator* inst_;//private static pointer
	string grades;
public:
	GPAcalculator* getinstance();//public method which return the same class object
};

class courseReistration {


private:
	courseReistration();//private constructor
	static courseReistration* inst_;//private static pointer
	string courses;
public :
	courseReistration* getInstance();
	void registerCourse(int studentId, string CourseId);
};


class FeedBackSystem {
private:

	FeedBackSystem();//private constructor
	static FeedBackSystem* inst_;//private static pointer
	string feedbackData;

public:
	FeedBackSystem* getInstance(); //public method which return the same class object
	void submitFeedback(string Feedback, int studentId);

};


class NOtification {
private:

	NOtification();///private constructor
	static  NOtification* inst_; // private static pointer
	string notification;

public:
	 NOtification*  getinstance();//public method which return the same class object
	 void sendMesage(string mesaage, string receiptent);

};


class AthenticationSystem {

private:
	AthenticationSystem();//private constructor
	static AthenticationSystem* inst_;// private static pointer
	string username;
	string password;
public:

	AthenticationSystem* getInstance();//public method which return the same class object

};

class studentPortal {
private:
	studentPortal();//private constructor
	static studentPortal* inst_;// private static pointer
	string Enrolledcourse;
	string gARdes;
	Course courses;

public:
	studentPortal* Getinstance();//public method which return the same class object

};
