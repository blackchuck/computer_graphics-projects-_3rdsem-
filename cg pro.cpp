#include <conio.h>
#include <dos.h>
#include <graphics.h>
/*


        PROJECT TITLE:Creating a  bird and makde it to fly from left to right
	NAME:ROSHAN JUNG KUNWAR
	STUDENT ID:ACE078BEI038
        DEPARTMENT:ELECTRONICS AND COMPUTER ENGINEERING
	FACULTY:ELECTRONIC,COMMUNICATION AND INFORMATION[BEI]
	DATE OF SUBMISSION:2080-11-23
	PROJECT:COMPUTER GRAPHICS PROJECT FOR FOURTH SEMEMSTER(BATCH-2078)
        LAB INSTRUCTOR:Er.RAMESH SHARMA	
    

	
*/
void handDown(int i)
{
    
    line(85 + i, 155, 45 + i, 185);
    line(85 + i, 155, 115 + i, 195);
    arc(90 + i, 130, 228, 292, 70);
}

void handUp(int i)
{
    line(85 + i, 155, 125 + i, 115);
    line(85 + i, 155, 55 + i, 118);
    arc(90 + i, 177, 60, 122, 70);
}

int main() 
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    int i = 0;

    for (i = 0; i < 400; i++)
    {
        // for Body
        circle(150 + i, 150, 20);
        arc(90 + i, 190, 50, 145, 60);
        arc(87 + i, 117, 220, 320, 60);

        //for  Beak
        line(170 + i, 147, 180 + i, 153);
        line(180 + i, 153, 170 + i, 156);

        // for Eye
        circle(162 + i, 150, 2);

        // forTail
        line(10 + i, 155, 40 + i, 155);
        line(10 + i, 145, 40 + i, 155);
        line(10 + i, 165, 40 + i, 155);

        // Move hands
        if (i % 2 == 0)
            handUp(i);
        else
            handDown(i);

        // Stop the screen for 10 ms
        delay(3);

        // Clear the screen
        cleardevice();
    }

    getch();

    // Close the graph
    closegraph();

    return 0;
}

