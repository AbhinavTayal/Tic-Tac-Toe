#include <iostream>
using namespace std;
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
void Draw()
{
    system("cls");
    cout << "\n Abhinav Tayal Creation's" << endl;
    cout<< matrix[0][0] <<" | "<< matrix[0][1] <<" | "<< matrix[0][2];
cout<<"\n--|---|--\n";
cout<< matrix[1][0] <<" | "<< matrix[1][1] <<" | "<< matrix[1][2];
cout<<"\n--|---|--\n";
cout<< matrix[2][0] <<" | "<< matrix[2][1] <<" | "<< matrix[2][2];

    }
void Input()
{
    int a;
    cout << "\nPress the number of the field ( should be between 1 to 9 ) :";
    cin >> a;
 
    if (a == 1 && matrix[0][0] == '1')
     matrix[0][0] = player;
      else if (a == 1 && matrix[0][0] != '1')
      { cout<<" You Have Entered The wrong Position. Other Player Turn \n";
       }
    
     else if (a == 2 && matrix[0][1]== '2')
        matrix[0][1] = player;
        else if (a == 2 && matrix[0][1] != '2')
      { cout<<" You Have Entered The wrong Position. Other Player Turn \n";
       }
        
    else if (a == 3)
        matrix[0][2] = player;
        else if (a == 3 && matrix[0][2] != '3')
      { cout<<"You Have Entered The wrong Position. Other Player Turn \n";
       }
    else if (a == 4)
        matrix[1][0] = player;
        else if (a == 4 && matrix[1][0] != '4')
      { cout<<" You Have Entered The wrong Position. Other Player Turn \n";
       }
    else if (a == 5)
        matrix[1][1] = player;
        else if (a == 5 && matrix[1][1] != '5')
      { cout<<" You Have Entered The wrong Position. Other Player Turn \n";
       }
    else if (a == 6)
        matrix[1][2] = player;
        else if (a == 6 && matrix[1][2] != '6')
      { cout<<" You Have Entered The wrong Position. Other Player Turn \n";
       }
    else if (a == 7)
        matrix[2][0] = player;
        else if (a == 7 && matrix[2][0] != '7')
      { cout<<" You Have Entered The wrong Position. Other Player Turn \n";
       }
    else if (a == 8)
        matrix[2][1] = player;
        else if (a == 8 && matrix[2][1] != '8')
      { cout<<" You Have Entered The wrong Position. Other Player Turn \n";
       }
    else if (a == 9)
        matrix[2][2] = player;
        else if (a == 9 && matrix[2][2] != '9')
      { cout<<" You Have Entered The wrong Position. Other Player Turn \n";
       }
}
void TogglePlayer()
{
    if (player == 'X')
        player = 'O';
    else
        player = 'X';
}
char Win()
{
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
 
    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        return 'O';
 
    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
 
    return '/';
}
int main()
{
    Draw();
    while (1)
    {
        Input();
        Draw();
        if (Win() == 'X')
        {
            cout << "\nX wins!" << endl;
            break;
        }
        else if (Win() == 'O')
        {
            cout << "\nO wins!" << endl;
            break;
        }
        else if( matrix[0][0] != '1' && matrix[0][1] != '2' && matrix[0][2] != '3' && matrix[1][0] != '4' && matrix[1][1]  != '5' && matrix[1][2] != '6' &&
matrix[2][0] != '7' && matrix[2][1] != '8' &&  matrix[2][2] != '9' )
{ cout <<" \nMatch Draw";
break;
}  
        TogglePlayer();
    }
    return 0;
}
