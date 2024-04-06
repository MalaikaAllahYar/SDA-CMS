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
	virtual CampusMAngmentSystem* clone() const = 0;
};
class Student {
private:
	Student();// private class constructor
	string studentId;
	string studentName;

public:
	void viewAttendance();
	void viewGrades();
	void viewTranscript();
	virtual Student* clone() const = 0;

};
class Course {
private:
	string courseId;
	string CourseName;
	list<Student> StudentEnrollment;
public:
	virtual Course* clone() const = 0;
	
};
class Faculity {

private:
	string faculityid;
	string FaculityName;
	list<Course> courseTaught;
public:
	virtual Faculity* clone() const = 0;

};

class attendanceTracker {
private:
	string	attendanceData;

public:
	void recordAttendance(int studentId, string data);
	void genetateAttendanceReport();

	virtual attendanceTracker* clone() const = 0;
};

class GPAcalculator {
private:
	string grades;
public:
	virtual GPAcalculator* clone() const = 0;
};

class courseReistration {


private:
	string courses;
public:
	void registerCourse(int studentId, string CourseId);

	virtual courseReistration* clone() const = 0;
};


class FeedBackSystem {
private:
   string feedbackData;

public:
	void submitFeedback(string Feedback, int studentId);

	virtual FeedBackSystem* clone() const = 0;
};


class NOtification {
private:

	string notification;

public:
	void sendMesage(string mesaage, string receiptent);

	virtual NOtification* clone() const = 0;
};


class AthenticationSystem {

private:
	string username;
	string password;
public:
	virtual AthenticationSystem* clone() const = 0;
};

class studentPortal {
private:
	string Enrolledcourse;
	string gARdes;
	
public:
	virtual studentPortal* clone() const = 0;
};
