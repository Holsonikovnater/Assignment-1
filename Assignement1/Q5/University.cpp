//Holsonikov Dorisca , 40316045
//William Huynh , 40319618
// Including the classes from the other files
#include "../Q1/Student.h"
#include "../Q2/CourseSection.hpp"
#include "../Q3/Professor.hpp"
#include "../Q4/Room.hpp"

#include <iostream>
#include <string>
#include <vector>   
//Checks that we have not exceded the maximum capacity of a course section in terms of students 
void addStudentToCourseSection(int sectionCapacity,std::vector <std::vector<std::string>>& registration,int coursIndex,Student& desiredStudent)
{
    //Checking to see if the course section is full
    {   
        //Checking to see if the course section is full
        if(registration[0].size()<sectionCapacity)
        {
            registration[coursIndex].push_back(desiredStudent.getStudentID()); 
        }
        else
        {
            std::cout<<"Failed to add student with id: "<<desiredStudent.getStudentID()<<" to course section with id: "<<registration[0][0]<<" due to course section capacity\n"; 
        }
    }
    
}

void addCourseToProfessor(int professorCapacity,std::vector <std::vector<std::string>>& professorAssignment,int professorIndex,CourseSection& desiredCourseSection)
{
    if (professorAssignment[professorIndex].size()<professorCapacity+1)
    {
        professorAssignment[professorIndex].push_back(desiredCourseSection.getId()); 
    }
    else 
    {
       std::cout<<"Failed to add course section with id: "<<desiredCourseSection.getId()<<" to professor with id: "<<professorAssignment[0][0]<<" due to teaching capacity\n"; 

    }
    
}
//Returns a list of students taking a course
void listOfStudentInCourse(std::string courseSectionId,std::vector<std::vector<std::string>> &registration,std::vector<Student> &studentVector);
// Returns a list of course taught by a professor
void listOfCourseTaughtByProf(std::string profesorId,std::vector<std::vector<std::string>> &professorAssignment, std::vector<CourseSection> &courseSectionVector); 
//Returns the room where a course takes place
void roomWhereCourseIs(std::string courseId,std::vector<std::vector<std::string>> &courseAssignment, std::vector<Room> &roomVector);
// Searches if a student is taking a given course
void isStudentTakingCourse(std::string studentId,std::string courseSectionId,  std::vector<std::vector<std::string>> &registration);
//Searches if prof is teaching a given course
void isProfTeachingCourse(std::string profesorId,std::string coursSectionId, std::vector<std::vector<std::string>> &professorAssignment, std::vector<CourseSection> &courseSectionVector);


int main()
{
    //Using id's to track everything
    
    // Setting our maxes
    int sectionCapacity = 100; 
    int teachingCapacity = 3;
    //Will not need because we one room will have one course section and one professor.
    int roomCapacity = 120; 
     
    // Lets hard code some objects  6 sections , 6 students , 2 professors, 6 rooms

    // Making 6 course section objects
    CourseSection courseSection1("cs1","section1","Differential Equations",sectionCapacity);
    CourseSection courseSection2("cs2","section2","Vector Calc",sectionCapacity);
    CourseSection courseSection3("cs3","section3","Responsability",sectionCapacity);
    CourseSection courseSection4("cs4","section4","Environment",sectionCapacity);
    CourseSection courseSection5("cs5","section5","Technical Writing",sectionCapacity);
    CourseSection courseSection6("cs6","section6","Made up course",sectionCapacity);
    
    // Making 6 rooms 
    Room room1(1,roomCapacity); 
    Room room2(2,roomCapacity); 
    Room room3(3,roomCapacity); 
    Room room4(4,roomCapacity); 
    Room room5(5,roomCapacity); 
    Room room6(6,roomCapacity); 

    // Making 6 students
    Student student1("s1","Student1","One","One street","One@gmail.com"); 
    Student student2("s2","Student2","Two","Two street","Two@gmail.com"); 
    Student student3("s3","Student3","Three","Three street","Three@gmail.com"); 
    Student student4("s4","Student4","Four","Four street","Four@gmail.com"); 
    Student student5("s5","Student5","Five","Five street","Five@gmail.com"); 
    Student student6("s6","Student6","Six","Six street","Six@gmail.com"); 
    
    //Making 2 profesors 
    Professor profesor1("p1","Professor1","One","One hundred street","OneHundred@gmail.com");
    Professor profesor2("p2","Professor2","Two","Two hundred street","TwoHundred@gmail.com");

    //Making vectors that contains all the objects belonging to the same class created
    std::vector<CourseSection> courseSectionVector; 
    std::vector<Room> roomVector; 
    std::vector<Student> studentVector;
    std::vector<Professor> professorVector;
    
    // Making 2 dimensional vectors to contain the id's I want to track
    // The first column= 1st class id , rest of the colums = 2nd class id
    std::vector <std::vector<std::string>> registration; 
    std::vector <std::vector<std::string>> courseAssignment; 
    std::vector <std::vector<std::string>> professorAssignment; 

    //Lets add all the objects into their corresponding vectors 
    courseSectionVector.push_back(courseSection1); 
    courseSectionVector.push_back(courseSection2); 
    courseSectionVector.push_back(courseSection3); 
    courseSectionVector.push_back(courseSection4); 
    courseSectionVector.push_back(courseSection5); 
    courseSectionVector.push_back(courseSection6);
    
    roomVector.push_back(room1); 
    roomVector.push_back(room2); 
    roomVector.push_back(room3); 
    roomVector.push_back(room4); 
    roomVector.push_back(room5); 
    roomVector.push_back(room6); 

    studentVector.push_back(student1);
    studentVector.push_back(student2);
    studentVector.push_back(student3);
    studentVector.push_back(student4);
    studentVector.push_back(student5);
    studentVector.push_back(student6);

    professorVector.push_back(profesor1); 
    professorVector.push_back(profesor2); 

    //Registration: Adding course identification
    registration.push_back({});
    registration[0].push_back(courseSection1.getId());
    registration.push_back({});
    registration[1].push_back(courseSection2.getId());
    registration.push_back({});
    registration[2].push_back(courseSection3.getId()); 
    registration.push_back({});
    registration[3].push_back(courseSection4.getId());
    registration.push_back({});
    registration[4].push_back(courseSection5.getId()); 
    registration.push_back({});
    registration[5].push_back(courseSection6.getId()); 
    

    //Registration: Adding student identification
    addStudentToCourseSection(sectionCapacity,registration,0,student1);
    addStudentToCourseSection(sectionCapacity,registration,1,student2);
    addStudentToCourseSection(sectionCapacity,registration,2,student3);
    addStudentToCourseSection(sectionCapacity,registration,3,student4);
    addStudentToCourseSection(sectionCapacity,registration,4,student5);
    addStudentToCourseSection(sectionCapacity,registration,5,student6);

    //CourseAssignment: Adding course identification 
    courseAssignment.push_back({});
    courseAssignment[0].push_back(courseSection1.getId()); 
    courseAssignment.push_back({});
    courseAssignment[1].push_back(courseSection2.getId());
    courseAssignment.push_back({});
    courseAssignment[2].push_back(courseSection3.getId());
    courseAssignment.push_back({}); 
    courseAssignment[3].push_back(courseSection4.getId());
    courseAssignment.push_back({});
    courseAssignment[4].push_back(courseSection5.getId());
    courseAssignment.push_back({});
    courseAssignment[5].push_back(courseSection6.getId());
    
    //CourseAssignment: Adding room identification (needed to convert the room id to strings) ( Giving each course a room)
    courseAssignment[0].push_back(std::to_string(room1.getID())); 
    courseAssignment[1].push_back(std::to_string(room2.getID())); 
    courseAssignment[2].push_back(std::to_string(room3.getID()));  
    courseAssignment[3].push_back(std::to_string(room4.getID())); 
    courseAssignment[4].push_back(std::to_string(room5.getID())); 
    courseAssignment[5].push_back(std::to_string(room6.getID())); 
    
    //ProfessorAssigment: Adding professor identification
    professorAssignment.push_back({});
    professorAssignment[0].push_back(profesor1.getId()); 
    professorAssignment.push_back({});
    professorAssignment[1].push_back(profesor2.getId());
    
    //ProfessorAssignment: Adding course identification
    addCourseToProfessor(3,professorAssignment,0,courseSection1); 
    addCourseToProfessor(3,professorAssignment,0,courseSection2); 
    addCourseToProfessor(3,professorAssignment,0,courseSection3); 
    addCourseToProfessor(3,professorAssignment,1,courseSection4); 
    addCourseToProfessor(3,professorAssignment,1,courseSection5); 
    addCourseToProfessor(3,professorAssignment,1,courseSection6); 

    
    /*
    //Testing the students in course function
    listOfStudentInCourse("cs6",registration,studentVector);

    //Testing course taught by teacher
    listOfCourseTaughtByProf("p3",professorAssignment,courseSectionVector); 

    //Testing room where course is
    roomWhereCourseIs("cs3",courseAssignment,roomVector);

    //Testing if we can verify if a student is taking a given course 
    isStudentTakingCourse("s2","cs1",registration); 

    //Testing if we can verify if a teacher is teaching a given course
    isProfTeachingCourse("p1","cs4",professorAssignment,courseSectionVector);
    */

    //Creating menu 
    bool menu = true; 
    while (menu)
    {
        int decision; 
        //Available options
        std::cout<<"\n\nLoading in students,professors,courses and rooms...........\nTo perform a desired action,press the corresponding number:\n"; 
        std::cout<<"1.Return the list of students taking a particular course:\n";
        std::cout<<"2.Return the list of course taught by a give prof:\n";
        std::cout<<"3.Return the room where the course section takes place:\n";
        std::cout<<"4.Search if a given student is taking a given course:\n";
        std::cout<<"5.Search if a given prof is teaching a given course:\n"; 
        std::cout<<"6.Exit\n\n";
        std::cout<<"Decision:";
        // Could throw an exception here in the future if the user does not enter the right value 
        std::cin>>decision;

        // Calling repsective functions 
        switch(decision)
        {
            case 1:
            {
                std::string desiredCourseIdentification;
                std::cout<<"Course Idenfication number: "; 
                std::cin>> desiredCourseIdentification; 

                listOfStudentInCourse(desiredCourseIdentification,registration,studentVector); 
                break; 
            }
            case 2:
            {
                std::string desiredProfIdentification;
                std::cout<<"Professor Idenfication number: "; 
                std::cin>> desiredProfIdentification; 

                listOfCourseTaughtByProf(desiredProfIdentification,professorAssignment,courseSectionVector);
                break; 
            }
            case 3:
            {
                std::string desiredCourseIdentification;
                std::cout<<"Course Idenfication number: "; 
                std::cin>> desiredCourseIdentification; 

                roomWhereCourseIs(desiredCourseIdentification,courseAssignment,roomVector);
                break; 
            }
            case 4:
            {
                std::string desiredStudentIdentification;
                std::string desiredCourseIdentification;
                std::cout<<"Student Idenfication number: "; 
                std::cin>> desiredStudentIdentification;
                std::cout<<"Course Idenfication number: "; 
                std::cin>> desiredCourseIdentification;
                

                isStudentTakingCourse(desiredStudentIdentification,desiredCourseIdentification,registration);
                break;
            }
            case 5:
            {
                std::string desiredProfIdentification;
                std::string desiredCourseIdentification;
                std::cout<<"Professor Idenfication number: "; 
                std::cin>> desiredProfIdentification; 
                std::cout<<"Course Idenfication number: "; 
                std::cin>> desiredCourseIdentification;
                 

                isProfTeachingCourse(desiredProfIdentification,desiredCourseIdentification,professorAssignment,courseSectionVector); 
                break;
            }
            case 6: 
            {
                menu = false;
                break;
            }
            default:
            {
                std::cout<<"Please enter a valid number\n"; 
                break; 
            }
        }
        std::cout<<"Thank you for using the program :)"; 


    }

    return 0; 
}

//Returns a list of students taking a course
void listOfStudentInCourse(std::string courseSectionId,  std::vector<std::vector<std::string>> &registration, std::vector<Student> &studentVector)
{
    std::cout<<"\nList of students taking this course:";
    bool found_course = false; 
    bool found_student = false;
    // Iterating through the course identifications in registration vector , until we find the desired course
    for (int i = 0; i<registration.size(); i++)
    {
        
        if (registration[i][0] == courseSectionId)
        {
            found_course = true; 
            //Iterating though all the student identifications
            for (int j = 1; j<registration[i].size(); j++)
            {
                std::string currentStudentId = registration[i][j]; 
                //Printing out the info of all students in the course section 
                for ( auto &student: studentVector)
                {
                    
                    if (currentStudentId == student.getStudentID())
                    {
                        found_student = true; 
                        student.studentPrint(); 
                        
                    } 
                }

            }
        }
        
        

    }
    if (found_course == false)
    {
        std::cout<<"\nCould not find this course section";
        if (found_student == false)
        {
        std::cout<<"\nCould not find any students in this course section"; 
        }
    }
    
} 
// Returns a list of course taught by a professor
void listOfCourseTaughtByProf(std::string profesorId,std::vector<std::vector<std::string>> &professorAssignment, std::vector<CourseSection> &courseSectionVector)
{
    std::cout<<"\nList of course taught by professor:\n";
    bool found_prof= false; 
    bool found_course = false;
    // Iterating through the professor identification until we find the desired professor
    for (int i = 0; i<professorAssignment.size(); i++)
    {
        
        if (professorAssignment[i][0] == profesorId)
        {
            found_prof = true; 
            //Iterating through all the course identifications
            for (int j = 1; j<professorAssignment[i].size(); j++)
            {
                std::string currentCourseId = professorAssignment[i][j]; 
                //Printing out the info of course this professor teaches 
                for ( auto &courseSection: courseSectionVector)
                {
                    
                    if (currentCourseId == courseSection.getId())
                    {
                        found_course = true; 
                        std::cout<<"\n";
                        courseSection.printCourseSection(); 
                        
                    } 
                }

            }
        }
        
        

    }
    if (found_prof == false)
    {
        std::cout<<"\nCould not find this professor";
        if (found_course == false)
        {
        std::cout<<"\nCould not find any course this professor teaches"; 
        }
    }

}
//Returns the room where a course takes place
void roomWhereCourseIs(std::string courseId,std::vector<std::vector<std::string>> &courseAssignment, std::vector<Room> &roomVector)
{
    std::cout<<"\nRoom number where course takes place:\n";
    bool found_course= false; 
    bool found_room = false;
   
    for (int i = 0; i<courseAssignment.size(); i++)
    {
        
        if (courseAssignment[i][0] == courseId)
        {
            found_course = true; 
            for (int j = 1; j<courseAssignment[i].size(); j++)
            {
                std::string currentRoomId = courseAssignment[i][j]; 
                for ( auto &room: roomVector)
                {
                    
                    if (currentRoomId == std::to_string(room.getID()))
                    {
                        found_room = true; 
                        std::cout<<"\n";
                        room.printRoom(); 
                        
                    } 
                }

            }
        }
        
        

    }
    if (found_course == false)
    {
        std::cout<<"\nCould not find this course";
        if (found_room == false)
        {
        std::cout<<"\nCould not find a room assigned to this course"; 
        }
    }
}
// Searches if a student is taking a given course
void isStudentTakingCourse(std::string studentId,std::string courseSectionId,  std::vector<std::vector<std::string>> &registration)
{
    bool found_course = false; 
    bool found_student = false;
    for (int i = 0; i<registration.size(); i++)
    {
        
        if (registration[i][0] == courseSectionId)
        {
            found_course = true; 
            for (int j = 1; j<registration[i].size(); j++)
            {
                std::string currentStudentId = registration[i][j]; 
                if (currentStudentId ==studentId)
                {
                    found_student = true; 
                }

            }
        }
        
        

    }
    if (found_course == false)
    {
        std::cout<<"\nCould not find this course section";
        
    }
    else
    {
        if (found_student ==false)
        {
            std::cout<<"\nStudent with identification number("<<studentId<<") is not taking the given course section with identification number("<<courseSectionId<<")\n"; 
        }
        else
        {
            std::cout<<"\nStudent with identification number("<<studentId<<") is taking the given course section with identification number("<<courseSectionId<<")\n";
        }
        
    }
    
}
//Searches if prof is teaching a given course
void isProfTeachingCourse(std::string profesorId,std::string coursSectionId, std::vector<std::vector<std::string>> &professorAssignment, std::vector<CourseSection> &courseSectionVector)
{
    bool found_course= false; 
    bool found_prof = false;
    for (int i = 0; i<professorAssignment.size(); i++)
    {
        
        if (professorAssignment[i][0] == profesorId)
        {
            found_prof = true; 
            for (int j = 1; j<professorAssignment[i].size(); j++)
            {
                std::string currentCourseId = professorAssignment[i][j]; 
                if (currentCourseId == coursSectionId)
                    {
                        found_course = true; 
                        
                    } 
                

            }
        }
        
        

    }
    if (found_prof == false)
    {
        std::cout<<"\nCould not find this professor";
        
    }
    else 
    {
        if (found_course == false)
        {
            std::cout<<"\nThe professor with the given identification ("<<profesorId<<") is not teaching the course with the identification number ("<<coursSectionId<<")\n"; 
        }
        else 
        {
            std::cout<<"\nThe professor with the given identification ("<<profesorId<<") is teaching the course with the identification number ("<<coursSectionId<<")\n"; 

        }
    }
}


