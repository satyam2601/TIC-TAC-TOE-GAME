#include<iostream>
using namespace std;

char square[10]={'0','1','2','3','4','5','6','7','8','9'};
void board();
int checkwin();


int main()
{
 int player =1,i , choice;
 char mark;
 
 do{
 board();
 if(player % 2 ==1)
 player=1;
 else
 player =2;
 cout<<endl<<endl;
 cout<<"Player "<<player<<"...."<<endl<<"Enter a number: ";
 cin>>choice;
 if (player == 1)
 {
 	mark='x';
 }
 else
 {
 	mark = '0';
 }
 if(choice == 1 && square[1] == '1')
 square [1] = mark;
 else if(choice == 2 && square[2] == '2')
 square [2] = mark;
 else if(choice == 3 && square[3] == '3')
 square [3] = mark;
 else if(choice == 4 && square[4] == '4')
 square [4] = mark;
 else if(choice == 5 && square[5] == '5')
 square [5] = mark;
 else if(choice == 6 && square[6] == '6')
 square [6] = mark;
 else if(choice == 7 && square[7] == '7')
 square [7] = mark;
 else if(choice == 8 && square[8] == '8')
 square [8] = mark;
 else if(choice == 9 && square[9] == '9')
 square [9] = mark;
 
else
{
	
  cout<<"Invalid move enter an invalid number..... ";
  player --;
  cin.ignore();
  cin.get();
}
 i=checkwin();
 player ++;
}
while (i ==-1);
board();
if (i == 1)
cout<<"                                       " <<": \a Player "<<--player<<" wins !! Congratulations... ";
else
cout<<"                                       "<<" : \a OOPS!Game Draw......... ";
cin.ignore();
cin.get();

return 0;

}


void board()
{
	system("cls");
	cout<<"                                             "<<"===================="<<endl<<endl;
	cout<<"                                             "<<"  TIC TAC TOE GAME  "<<endl<<endl;          
	cout<<"                                             "<<"===================="<<endl<<endl;
	
	cout<<"                                         "<<"  Player 1 [x] - Player 2 [0]"<<endl<<endl;
	cout<<endl;
	  cout<<"                                            "<<  "       |     |     "<<endl;
	  cout<<"                                             "<< "   "<<square[1]<<" "<< " | " <<" "<<square[2]<< "  |  "<< square[3]<<endl;
	  
	  cout<<"                                             "<<  " _____|_____|_____"<<endl;
	  cout<<"                                             " << "      |     |      "<<endl;
	  
	  cout<<"                                            "<<  "       |     |     "<<endl;
	  cout<<"                                             "<< "   "<<square[4]<<" "<< " | " <<" "<<square[5]<< "  |  "<< square[6]<<endl;
	  
	  cout<<"                                             "<<  " _____|_____|_____"<<endl;
	  cout<<"                                             " << "      |     |      "<<endl;
	  
	  cout<<"                                            "<<  "       |     |     "<<endl;
	  cout<<"                                             "<< "   "<<square[7]<<" "<< " | " <<" "<<square[8]<< "  |  "<< square[9]<<endl;
	  
	  cout<<"                                             "<<  " _____|_____|_____"<<endl;
	  cout<<"                                             " << "      |     |      "<<endl;
	  cout<<"                                            "<<  "       |     |     "<<endl;
	cout<<endl<<endl;
}

int checkwin()
{
	if(square [1] == square [2] && square [2] == square [3] )
	return 1;
	else if (square[4] == square[5] && square[5] == square[6]) 
	return 1;
	else if (square[7] == square[8] && square[8] == square[9]) 
	return 1;
	else if (square[1] == square[4] && square[4] == square[7]) 
	return 1;
	else if (square[2] == square[5] && square[5] == square[8]) 
	return 1;
	else if (square[3] == square[6] && square[6] == square[9]) 
	return 1;
	else if (square[1] == square[5] && square[5] == square[9]) 
	return 1;
	else if (square[3] == square[5] && square[5] == square[7]) 
	return 1;
	else if (square [1] !=  '1' && square [2] != '2' && square [3] != '3'&& square [4] != '4' && square [5] != '5'
	&& square [6] != '6' && square [7] != '7' && square [8] != '8' && square [9] != '9')
	return 0;
	else
	{
	return -1;	
	}
}
