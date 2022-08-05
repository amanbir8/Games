#include<iostream>
#include<cstdlib> // library for random number generation
#include<ctime>
using namespace std;
int main()
{
	int generated_number, tries=0, guess_number;
	char play_again='y';
	
	while(play_again =='y')
	{
		tries=0; 			//for reset tries after selecting to play again
		srand(time(0)); 
		generated_number = rand() % 100 + 1;  		//for selecting number b/w 1-99(%100), +1 used for selecting no b/w 1-100
		cout<<"\t\t\t> GUESSING NUMBER GAME <"<<endl;
		cout<<"\t\t     # DEVELOPED BY AMANBIR SINGH #\n\n"<<endl;
		// cout<<"random number = "<<generated_number<<"\n"<<endl; // we can use this for checking that everytime new no. is generating or not !
	
		do			//do while :- first check whole statement then check condition at last
		{
			cout<<">> Enter guess number between 1 - 100 :- ";
			cin>>guess_number;
			tries++;
		
			if(guess_number > generated_number)
			{
				cout<<"\nTOO HIGH !\n"<<endl;
			}
			
			else if(guess_number < generated_number)
			{
				cout<<"\nTOO LOW !\n"<<endl;
			}
			
			else
			{
				cout<<"\n>> YOUR GUESSED NUMBER IS CORRECT !\n\n"<<endl;
			}
			
		}while(guess_number != generated_number); //condition
	
			cout<<"\t\t>> YOU COMPLETED GAME IN "<<tries<<" TRIES !!\n"<<endl;
			cout<<">> DO YOU LIKE TO PLAY AGAIN (y/n) :- ";
			cin>>play_again;
			cout<<"\n"<<endl;
	}
	
		if(play_again == 'n')
		{
			cout<<"\n\t\t>> THANK YOU FOR PLAYING !! <<"<<endl;
		}
}

