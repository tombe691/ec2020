//=====================================================================
//Filename      : main.cpp
//Description   : Program to calculate surface area/volume/ of sphere 
//                box and cone by inheritance.
//Version       : 1.0
//Date          : 2020-17-11
//Author        : Madhavi Nair,madhavianair@gmail.com
//=====================================================================
# include <iostream>
# include <cmath>
# include "Shape.h"

int main()
{
    //Declaring objects of all 3 sub classes
    Sphere sphere_obj;
    Box box_obj;
    Cone cone_obj;

    //Declaring variables
    int choice, flag =0; 
    int check = 1;
    char option = 'y';


  
    //Condition to check for continuous selection
    while (option == 'y' || option == 'Y')
    {
        //Displaying various options
        std::cout <<"Select shape to calculate volume and area" <<std::endl
             <<"\n1.Sphere\n2.Box \n3.Cone" << std::endl;
        // Taking user choice
         std::cin >>choice;
        
    // depending on the user choice the respective function is chosen

        switch(choice)
        {
            case 1:
                while(check)
                {
                    float sphere_radius;
                    std::cout << "\nEnter the radius\n" ;
                    std::cin >> sphere_radius;
                    //validation and assignment of data  to data member
                    if(sphere_obj.get_radius(sphere_radius) == true)
                        check = 0;
                    else
                    {
                        // if false user is prompted for valid data
                        std::cout << "Enter only positive numbers" << std::endl;
                    }
                }
                
                flag = 0;
                break;

            case 2:  
                while(check)
                {
                    float height, length, width;
                    // taking values from user
                    std::cout << "Enter the height\n" ;
                    std::cin >> height;
                    std::cout << "Enter the width\n" ;
                    std::cin >> width;
                    std::cout << "Enter the length\n" ;
                    std::cin >> length;
                    //validation and assignment of data  to data members
                    if(box_obj.get_box_data(height,width,length) == true)
                        check = 0;
                    else
                        {
                            std::cout << "Enter only positive numbers" << std::endl;
                        }
                }         
                flag = 0;
                break;

            case 3:
                while(check)
                {
                    float height, length, radius;
                    std::cout << "Enter the height\n" ;
                    std::cin >> height;
                    std::cout << "Enter the radius\n" ;
                    std::cin >> radius;
                    if(cone_obj.get_cone_data(height,radius) == true)
                        check = 0;
                    else
                        {
                            std::cout << "Enter only positive numbers" << std::endl;
                        }
                }
                flag = 0;
                break;

            case 4:
                std::cout << "Exiting..." << std::endl;
                exit(0);

            default:
            // Prompt for valid choice
                std::cout << "Invalid choice." << std::endl;
                std::cout << "\nPlease enter correct input.\n" << std::endl;
                flag = 1;
                break;   
        }
        // checking if the user wants to do more operations
        if(flag == 0)
        {
            std::cout << "Wish to continue? Y or N\n" << std::endl;
            getchar();
            std::cin >> option;
            check = 1;
        }
        
    
    }   
    


}



