#include<iostream>

#include<iomanip>


using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////
const char EMPTY = '-';
const char PAWN = 'P';
const char KNIGHT = 'N';
const char BISHOP = 'B';
const char ROOK = 'R';
const char QUEEN = 'Q';
const char KING = 'K';


char board[8][8] =

{
   {ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK},
   {PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN},
   {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
   {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
   {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
   {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
   {PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN},
   {ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK}
};


void print_board()

{

    cout << setw(30) << " ";

    for (int i = 1; i <= 8; i++)
    {
        cout << i << " ";
    }
    cout << endl << endl;


    for (int i = 0; i < 8; i++)
    {
        cout << setw(27) << i + 1 << "   ";


        for (int j = 0; j < 8; j++)
        {

            cout << board[i][j] << " ";
        }
        cout << setw(3) << 8 - i << "  ";
        cout << endl;

    }
    cout << endl;


}


void move_pawn()                //pawn//////
{
    int C_ROW, C_COL;

    int p1;



    char paawn[4][4] = { {'_', '_', '_', '_'},
                      {'*', '$', '*', '$'},
                      {'*', '_', 'p', '_'},
                      {'p', '_', '_', '_'} };


    cout << "THE MOVES FOR THE PAWN CAN BE (*): and to capture($) " << endl << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << setw(27) << "   ";
        for (int j = 0; j < 4; j++) {
            cout << paawn[i][j] << " ";
        }
        cout << setw(3) << 8 - i << "  ";
        cout << endl;
    }
    cout << endl;





    cout << "Enter current row (7) of the pawn you want to move: ";
    cin >> C_ROW;
    C_ROW--;

    cout << "Enter current column (1 TO 8 ) of the pawn you want to move: ";
    cin >> C_COL;
    C_COL--;


    int N_ROW, N_COL;
    cout << "Enter row (5 OR 6 ) where you want to move the pawn (BUT ONLY FOR FIRST TIME): ";
    cin >> N_ROW;
    N_ROW--;

    cout << "Enter the same column to move the pawn: ";
    cin >> N_COL;
    N_COL--;

    cout << endl;

    board[N_ROW][N_COL] = board[C_ROW][C_COL];
    board[C_ROW][C_COL] = ' ';



    cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
    for (int i = 0; i < 8; i++) {
        cout << setw(27) << i + 1 << "   ";
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << setw(3) << 8 - i << "  ";
        cout << endl;
    }




    cout << "     >>>  PLAYER 2 TURN >> :" << endl << endl;

    cout << "SELECT YOUR CHOICE IN PIECES " << endl << endl;
    cout << "1. PAWN = P" << endl;
    cout << "2. KNIGHT = N" << endl;
    cout << "3. KING = K" << endl;
    cout << "4. QUEEN = Q" << endl;
    cout << "5. ROOK = R" << endl;
    cout << "6. BISHOP = B" << endl;

    cout << endl;
    cin >> p1;

    if (p1 == 1)
    {
        cout << "THE MOVES FOR THE PAWN CAN BE (*): " << endl << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << setw(27) << "   ";
            for (int j = 0; j < 4; j++) {
                cout << paawn[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row (2 ) of the pawn you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the pawn you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter row (3 OR 4 ) where you want to move the pawn (BUT ONLY FOR FIRST TIME): ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the same column to move the pawn: ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<<: " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
    }//if

    else if (p1 == 2)
    {
        char KNIGHT[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '*', '_', '*', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '_', 'N', '_', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '*', '_',},
                       {'_', '_', '_', '*', '_', '*', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'} };

        cout << "THE MOVES FOR THE KNIGHT CAN BE (*): " << endl << endl;
        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << KNIGHT[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row  for the knight you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the knight you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the knight : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the knight : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << " >>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }

            cout << endl;
        }
    }//else
    else if (p1 == 3)
    {


        char KNIGHT[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                           {'_', '_', '_', '_', '_', '_', '_', '_'},
                           {'_', '_', '_', '_', '_', '_', '_', '_'},
                           {'_', '_', '_', '*', '*', '*', '_', '_'},
                           {'_', '_', '_', '*', 'K', '*', '_', '_'},
                           {'_', '_', '_', '*', '*', '*', '_', '_',},
                           {'_', '_', '_', '_', '_', '_', '_', '_'},
                           {'_', '_', '_', '_', '_', '_', '_', '_'} };

        cout << "THE MOVES FOR THE KING CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE : " << endl << endl;
        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << KNIGHT[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row  for the KING you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the KING you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the KING : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the KING : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
    }//else

    else if (p1 == 5)
    {
        char ROOK[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
   { '_', '_', '_', '_', '*', '_', '_', '_' },
   { '_', '_', '_', '_', '*', '_', '_', '_' },
   { '_', '_', '_', '_', '*', '_', '_', '_' },
   { '*', '*', '*', '*', 'R', '*', '*', '*' },
   { '_', '_', '_', '_', '*', '_', '_', '_', },
   { '_', '_', '_', '_', '*', '_', '_', '_' },
   { '_', '_', '_', '_', '*', '_', '_', '_' } };



        cout << "THE MOVES FOR THE ROOK CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE : " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";

            for (int j = 0; j < 8; j++) {
                cout << ROOK[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row  for the ROOK you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the ROOK you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the ROOK : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the ROOK : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
    }
    else if (p1 == 6)
    {
        char BISHOP[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '*', '_', '_', '_', '_', '_', '*'},
                      {'_', '_', '*', '_', '_', '_', '*', '_'},
                      {'_', '_', '_', '*', '_', '*', '_', '_'},
                      {'_', '_', '_', '_', 'B', '_', '_', '_'},
                      {'_', '_', '_', '*', '_', '*', '_', '_',},
                      {'_', '_', '*', '_', '_', '_', '*', '_'},
                      {'_', '*', '_', '_', '_', '_', '_', '*'} };



        cout << "THE MOVES FOR THE BISHOP CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE OR OPPONENT PIECE: " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";

            for (int j = 0; j < 8; j++) {
                cout << BISHOP[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row  for the BISHOP you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the BISHOP you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the BISHOP : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the BISHOP : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }

    }

    else if (p1 == 4)
    {
        char queen[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '*'},
                      { '_', '*', '_', '_', '*', '_', '_', '_' },
                      { '_', '_', '*', '_', '*', '_', '*', '_' },
                      { '_', '_', '_', '*', '*', '*', '_', '_' },
                      { '*', '*', '*', '*', 'Q', '*', '*', '*' },
                      { '_', '_', '_', '*', '*', '*', '_', '_', },
                      { '_', '_', '*', '_', '*', '_', '*', '_' },
                      { '_', '*', '_', '_', '*', '_', '_', '*' } };



        cout << "THE MOVES FOR THE QUEEN CAN BE (*): ?NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE ?or to capture oponent: " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << " ? ";

            for (int j = 0; j < 8; j++) {
                cout << queen[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ?";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row for the QUEEN you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the QUEEN you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row where you want to move the QUEEN : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the ?column to move the QUEEN : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>> ?{ NEW ?CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << " ? ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ?";
            cout << endl;
        }
    }


}






void move_knight()              //knight/////////
{
    int C_ROW, C_COL;

    int p2;



    char KNIGHT[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '*', '_', '*', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '_', 'N', '_', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '*', '_',},
                       {'_', '_', '_', '*', '_', '*', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'} };


    cout << "THE MOVES FOR THE KNIGHT CAN BE (*): " << endl << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << setw(27) << i + 1 << "   ";
        for (int j = 0; j < 8; j++) {
            cout << KNIGHT[i][j] << " ";
        }
        cout << setw(3) << 8 - i << "  ";
        cout << endl;
    }
    cout << endl;



    int N_ROW, N_COL;

    cout << "Enter current row  for the knight you want to move: ";
    cin >> C_ROW;
    C_ROW--;

    cout << "Enter current column (1 TO 8 ) of the knight you want to move: ";
    cin >> C_COL;
    C_COL--;



    cout << "Enter new row  where you want to move the knight : ";
    cin >> N_ROW;
    N_ROW--;

    cout << "Enter the  column to move the knight : ";
    cin >> N_COL;
    N_COL--;

    cout << endl;

    board[N_ROW][N_COL] = board[C_ROW][C_COL];
    board[C_ROW][C_COL] = ' ';



    cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
    for (int i = 0; i < 8; i++) {
        cout << setw(27) << i + 1 << "   ";
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << setw(3) << 8 - i << "  ";
        cout << endl;
    }




    cout << "  >>>PLAYER 2 TURN <<<<<" << endl << endl;

    cout << "SELECT YOUR CHOICE IN PIECES " << endl << endl;
    cout << "1. PAWN = P" << endl;
    cout << "2. KNIGHT = N" << endl;
    cout << "3. KING = K" << endl;
    cout << "4. QUEEN = Q" << endl;
    cout << "5. ROOK = R" << endl;
    cout << "6. BISHOP = B" << endl;

    cout << endl;

    cin >> p2;

    if (p2 == 2)
    {
        cout << "THE MOVES FOR THE KNIGHT CAN BE (*): " << endl << endl;
        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << KNIGHT[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row  for the knight you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the knight you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the knight : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the knight : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << " >>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }

    }//if

    else if (p2 == 1)
    {
        char paawn[4][4] = { {'_', '_', '_', '_'},
                      {'*', '$', '*', '$'},
                      {'*', '_', 'p', '_'},
                      {'p', '_', '_', '_'} };

        cout << "THE MOVES FOR THE PAWN CAN BE (*):and to capture ($) " << endl << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << setw(27) << "   ";
            for (int j = 0; j < 4; j++) {
                cout << paawn[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row (2 ) of the pawn you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the pawn you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter row (3 OR 4 ) where you want to move the pawn (BUT ONLY FOR FIRST TIME): ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the same column to move the pawn: ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<<: " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
    }//else


    else if (p2 == 3)
    {

        char KNIGHT[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                           {'_', '_', '_', '_', '_', '_', '_', '_'},
                           {'_', '_', '_', '_', '_', '_', '_', '_'},
                           {'_', '_', '_', '*', '*', '*', '_', '_'},
                           {'_', '_', '_', '*', 'K', '*', '_', '_'},
                           {'_', '_', '_', '*', '*', '*', '_', '_',},
                           {'_', '_', '_', '_', '_', '_', '_', '_'},
                           {'_', '_', '_', '_', '_', '_', '_', '_'} };

        cout << "THE MOVES FOR THE KING CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE : " << endl << endl;
        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << KNIGHT[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row  for the KING you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the KING you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the KING : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the KING : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }

    }

    else if (p2 == 5)
    {
        char ROOK[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
   { '_', '_', '_', '_', '*', '_', '_', '_' },
   { '_', '_', '_', '_', '*', '_', '_', '_' },
   { '_', '_', '_', '_', '*', '_', '_', '_' },
   { '*', '*', '*', '*', 'R', '*', '*', '*' },
   { '_', '_', '_', '_', '*', '_', '_', '_', },
   { '_', '_', '_', '_', '*', '_', '_', '_' },
   { '_', '_', '_', '_', '*', '_', '_', '_' } };



        cout << "THE MOVES FOR THE ROOK CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE : " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";

            for (int j = 0; j < 8; j++) {
                cout << ROOK[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row  for the ROOK you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the ROOK you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the ROOK : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the ROOK : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
    }
    else if (p2 == 6)
    {
        char BISHOP[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '*', '_', '_', '_', '_', '_', '*'},
                      {'_', '_', '*', '_', '_', '_', '*', '_'},
                      {'_', '_', '_', '*', '_', '*', '_', '_'},
                      {'_', '_', '_', '_', 'B', '_', '_', '_'},
                      {'_', '_', '_', '*', '_', '*', '_', '_',},
                      {'_', '_', '*', '_', '_', '_', '*', '_'},
                      {'_', '*', '_', '_', '_', '_', '_', '*'} };



        cout << "THE MOVES FOR THE BISHOP CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE OR OPPONENT PIECE: " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";

            for (int j = 0; j < 8; j++) {
                cout << BISHOP[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row  for the BISHOP you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the BISHOP you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the BISHOP : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the BISHOP : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }

    }

    else if (p2 == 4)
    {
        char queen[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '*'},
                      { '_', '*', '_', '_', '*', '_', '_', '_' },
                      { '_', '_', '*', '_', '*', '_', '*', '_' },
                      { '_', '_', '_', '*', '*', '*', '_', '_' },
                      { '*', '*', '*', '*', 'Q', '*', '*', '*' },
                      { '_', '_', '_', '*', '*', '*', '_', '_', },
                      { '_', '_', '*', '_', '*', '_', '*', '_' },
                      { '_', '*', '_', '_', '*', '_', '_', '*' } };



        cout << "THE MOVES FOR THE QUEEN CAN BE (*): ?NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE ?or to capture oponent: " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << " ? ";

            for (int j = 0; j < 8; j++) {
                cout << queen[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ?";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row for the QUEEN you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the QUEEN you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row where you want to move the QUEEN : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the ?column to move the QUEEN : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>> ?{ NEW ?CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << " ? ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ?";
            cout << endl;
        }
    }


}





void move_king()      //king ///////////
{
    int C_ROW, C_COL;

    int p3;




    char KNIGHT[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '*', '*', '*', '_', '_'},
                       {'_', '_', '_', '*', 'K', '*', '_', '_'},
                       {'_', '_', '_', '*', '*', '*', '_', '_',},
                       {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'} };


    cout << "THE MOVES FOR THE KING CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE : " << endl << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << setw(27) << i + 1 << "   ";
        for (int j = 0; j < 8; j++) {
            cout << KNIGHT[i][j] << " ";
        }
        cout << setw(3) << 8 - i << "  ";
        cout << endl;
    }
    cout << endl;



    int N_ROW, N_COL;

    cout << "Enter current row  for the KING you want to move: ";
    cin >> C_ROW;
    C_ROW--;

    cout << "Enter current column (1 TO 8 ) of the KING you want to move: ";
    cin >> C_COL;
    C_COL--;



    cout << "Enter new row  where you want to move the KING : ";
    cin >> N_ROW;
    N_ROW--;

    cout << "Enter the  column to move the KING : ";
    cin >> N_COL;
    N_COL--;

    cout << endl;

    board[N_ROW][N_COL] = board[C_ROW][C_COL];
    board[C_ROW][C_COL] = ' ';



    cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
    for (int i = 0; i < 8; i++) {
        cout << setw(27) << i + 1 << "   ";
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << setw(3) << 8 - i << "  ";
        cout << endl;
    }


    cout << "     >>>  PLAYER 2 TURN >> :" << endl << endl;

    cout << "SELECT YOUR CHOICE IN PIECES " << endl << endl;
    cout << "1. PAWN = P" << endl;
    cout << "2. KNIGHT = N" << endl;
    cout << "3. KING = K" << endl;
    cout << "4. QUEEN = Q" << endl;
    cout << "5. ROOK = R" << endl;
    cout << "6. BISHOP = B" << endl;

    cout << endl;

    cin >> p3;

    if (p3 == 3)
    {

        cout << "THE MOVES FOR THE KING CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE : " << endl << endl;
        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << KNIGHT[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row  for the KING you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the KING you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the KING : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the KING : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }

    }//if


    else if (p3 == 1)
    {
        char paawn[4][4] = { {'_', '_', '_', '_'},
                      {'*', '$', '*', '$'},
                      {'*', '_', 'p', '_'},
                      {'p', '_', '_', '_'} };

        cout << "THE MOVES FOR THE PAWN CAN BE (*):and to capture ($) " << endl << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << setw(27) << "   ";
            for (int j = 0; j < 4; j++) {
                cout << paawn[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row (2 ) of the pawn you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the pawn you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter row (3 OR 4 ) where you want to move the pawn (BUT ONLY FOR FIRST TIME): ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the same column to move the pawn: ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<<: " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
    }


    else if (p3 == 2)
    {
        char KNIGHT[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '_', '_', '*', '_', '*', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '_', '_', '_', 'N', '_', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '*', '_',},
                      {'_', '_', '_', '*', '_', '*', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '_', '_'} };

        cout << "THE MOVES FOR THE KNIGHT CAN BE (*): " << endl << endl;
        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << KNIGHT[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row  for the knight you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the knight you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the knight : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the knight : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << " >>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
    }

    else if (p3 == 5)
    {
        char ROOK[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
   { '_', '_', '_', '_', '*', '_', '_', '_' },
   { '_', '_', '_', '_', '*', '_', '_', '_' },
   { '_', '_', '_', '_', '*', '_', '_', '_' },
   { '*', '*', '*', '*', 'R', '*', '*', '*' },
   { '_', '_', '_', '_', '*', '_', '_', '_', },
   { '_', '_', '_', '_', '*', '_', '_', '_' },
   { '_', '_', '_', '_', '*', '_', '_', '_' } };



        cout << "THE MOVES FOR THE ROOK CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE : " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";

            for (int j = 0; j < 8; j++) {
                cout << ROOK[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row  for the ROOK you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the ROOK you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the ROOK : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the ROOK : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
    }

    else if (p3 == 6)
    {
        char BISHOP[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '*', '_', '_', '_', '_', '_', '*'},
                      {'_', '_', '*', '_', '_', '_', '*', '_'},
                      {'_', '_', '_', '*', '_', '*', '_', '_'},
                      {'_', '_', '_', '_', 'B', '_', '_', '_'},
                      {'_', '_', '_', '*', '_', '*', '_', '_',},
                      {'_', '_', '*', '_', '_', '_', '*', '_'},
                      {'_', '*', '_', '_', '_', '_', '_', '*'} };



        cout << "THE MOVES FOR THE BISHOP CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE OR OPPONENT PIECE: " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";

            for (int j = 0; j < 8; j++) {
                cout << BISHOP[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row  for the BISHOP you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the BISHOP you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the BISHOP : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the BISHOP : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }

    }

    else if (p3 == 4)
    {
        char queen[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '*'},
                      { '_', '*', '_', '_', '*', '_', '_', '_' },
                      { '_', '_', '*', '_', '*', '_', '*', '_' },
                      { '_', '_', '_', '*', '*', '*', '_', '_' },
                      { '*', '*', '*', '*', 'Q', '*', '*', '*' },
                      { '_', '_', '_', '*', '*', '*', '_', '_', },
                      { '_', '_', '*', '_', '*', '_', '*', '_' },
                      { '_', '*', '_', '_', '*', '_', '_', '*' } };



        cout << "THE MOVES FOR THE QUEEN CAN BE (*): ?NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE ?or to capture oponent: " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << " ? ";

            for (int j = 0; j < 8; j++) {
                cout << queen[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ?";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row for the QUEEN you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the QUEEN you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row where you want to move the QUEEN : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the ?column to move the QUEEN : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>> ?{ NEW ?CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << " ? ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ?";
            cout << endl;
        }
    }


}




void move_rook()                 //rook////////
{

    int C_ROW, C_COL;

    int p4;




    char ROOK[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
    { '_', '_', '_', '_', '*', '_', '_', '_' },
    { '_', '_', '_', '_', '*', '_', '_', '_' },
    { '_', '_', '_', '_', '*', '_', '_', '_' },
    { '*', '*', '*', '*', 'R', '*', '*', '*' },
    { '_', '_', '_', '_', '*', '_', '_', '_', },
    { '_', '_', '_', '_', '*', '_', '_', '_' },
    { '_', '_', '_', '_', '*', '_', '_', '_' } };



    cout << "THE MOVES FOR THE ROOK CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE : " << endl << endl;

    for (int i = 0; i < 8; i++)
    {
        cout << setw(27) << i + 1 << "   ";

        for (int j = 0; j < 8; j++) {
            cout << ROOK[i][j] << " ";
        }
        cout << setw(3) << 8 - i << "  ";
        cout << endl;
    }
    cout << endl;



    int N_ROW, N_COL;

    cout << "Enter current row  for the ROOK you want to move: ";
    cin >> C_ROW;
    C_ROW--;

    cout << "Enter current column (1 TO 8 ) of the ROOK you want to move: ";
    cin >> C_COL;
    C_COL--;



    cout << "Enter new row  where you want to move the ROOK : ";
    cin >> N_ROW;
    N_ROW--;

    cout << "Enter the  column to move the ROOK : ";
    cin >> N_COL;
    N_COL--;

    cout << endl;

    board[N_ROW][N_COL] = board[C_ROW][C_COL];
    board[C_ROW][C_COL] = ' ';



    cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
    for (int i = 0; i < 8; i++) {
        cout << setw(27) << i + 1 << "   ";
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << setw(3) << 8 - i << "  ";
        cout << endl;
    }


    cout << "     >>>  PLAYER 2 TURN >> :" << endl << endl;

    cout << "SELECT YOUR CHOICE IN PIECES " << endl << endl;
    cout << "1. PAWN = P" << endl;
    cout << "2. KNIGHT = N" << endl;
    cout << "3. KING = K" << endl;
    cout << "4. QUEEN = Q" << endl;
    cout << "5. ROOK = R" << endl;
    cout << "6. BISHOP = B" << endl;

    cout << endl;

    cin >> p4;

    if (p4 == 3)
    {

        char KING[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '*', '*', '*', '_', '_'},
                       {'_', '_', '_', '*', 'K', '*', '_', '_'},
                       {'_', '_', '_', '*', '*', '*', '_', '_',},
                       {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'} };

        cout << "THE MOVES FOR THE KING CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE : " << endl << endl;
        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << KING[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row  for the KING you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the KING you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the KING : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the KING : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }

    }


    else if (p4 == 1)
    {
        char paawn[4][4] = { {'_', '_', '_', '_'},
                      {'*', '$', '*', '$'},
                      {'*', '_', 'p', '_'},
                      {'p', '_', '_', '_'} };

        cout << "THE MOVES FOR THE PAWN CAN BE (*):and to capture ($)";
        for (int i = 0; i < 4; i++)
        {
            cout << setw(27) << "   ";
            for (int j = 0; j < 4; j++) {
                cout << paawn[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row (2 ) of the pawn you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the pawn you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter row (3 OR 4 ) where you want to move the pawn (BUT ONLY FOR FIRST TIME): ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the same column to move the pawn: ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<<: " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
    }


    else if (p4 == 2)
    {
        char KNIGHT[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '_', '_', '*', '_', '*', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '_', '_', '_', 'N', '_', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '*', '_',},
                      {'_', '_', '_', '*', '_', '*', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '_', '_'} };

        cout << "THE MOVES FOR THE KNIGHT CAN BE (*): " << endl << endl;
        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << KNIGHT[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row  for the knight you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the knight you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the knight : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the knight : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << " >>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
    }

    else if (p4 == 6)
    {
        char BISHOP[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '*', '_', '_', '_', '_', '_', '*'},
                      {'_', '_', '*', '_', '_', '_', '*', '_'},
                      {'_', '_', '_', '*', '_', '*', '_', '_'},
                      {'_', '_', '_', '_', 'B', '_', '_', '_'},
                      {'_', '_', '_', '*', '_', '*', '_', '_',},
                      {'_', '_', '*', '_', '_', '_', '*', '_'},
                      {'_', '*', '_', '_', '_', '_', '_', '*'} };



        cout << "THE MOVES FOR THE BISHOP CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE OR OPPONENT PIECE: " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";

            for (int j = 0; j < 8; j++) {
                cout << BISHOP[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row  for the BISHOP you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the BISHOP you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the BISHOP : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the BISHOP : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }

    }

    else if (p4 == 4)
    {
        char queen[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '*'},
                      { '_', '*', '_', '_', '*', '_', '_', '_' },
                      { '_', '_', '*', '_', '*', '_', '*', '_' },
                      { '_', '_', '_', '*', '*', '*', '_', '_' },
                      { '*', '*', '*', '*', 'Q', '*', '*', '*' },
                      { '_', '_', '_', '*', '*', '*', '_', '_', },
                      { '_', '_', '*', '_', '*', '_', '*', '_' },
                      { '_', '*', '_', '_', '*', '_', '_', '*' } };



        cout << "THE MOVES FOR THE QUEEN CAN BE (*): ?NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE ?or to capture oponent: " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << " ? ";

            for (int j = 0; j < 8; j++) {
                cout << queen[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ?";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row for the QUEEN you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the QUEEN you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row where you want to move the QUEEN : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the ?column to move the QUEEN : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>> ?{ NEW ?CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << " ? ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ?";
            cout << endl;
        }
    }

    else if (p4 == 5)
    {
        char ROOK[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
     { '_', '_', '_', '_', '*', '_', '_', '_' },
     { '_', '_', '_', '_', '*', '_', '_', '_' },
     { '_', '_', '_', '_', '*', '_', '_', '_' },
     { '*', '*', '*', '*', 'R', '*', '*', '*' },
     { '_', '_', '_', '_', '*', '_', '_', '_', },
     { '_', '_', '_', '_', '*', '_', '_', '_' },
     { '_', '_', '_', '_', '*', '_', '_', '_' } };



        cout << "THE MOVES FOR THE ROOK CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE : " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";

            for (int j = 0; j < 8; j++) {
                cout << ROOK[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row  for the ROOK you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the ROOK you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the ROOK : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the ROOK : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
    }

}





void move_bishop()         //bishop/////////
{

    int C_ROW, C_COL;

    int p5;




    char BISHOP[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '*', '_', '_', '_', '_', '_', '*'},
                       {'_', '_', '*', '_', '_', '_', '*', '_'},
                       {'_', '_', '_', '*', '_', '*', '_', '_'},
                       {'_', '_', '_', '_', 'B', '_', '_', '_'},
                       {'_', '_', '_', '*', '_', '*', '_', '_',},
                       {'_', '_', '*', '_', '_', '_', '*', '_'},
                       {'_', '*', '_', '_', '_', '_', '_', '*'} };



    cout << "THE MOVES FOR THE BISHOP CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE OR OPPONENT PIECE: " << endl << endl;

    for (int i = 0; i < 8; i++)
    {
        cout << setw(27) << i + 1 << "   ";

        for (int j = 0; j < 8; j++) {
            cout << BISHOP[i][j] << " ";
        }
        cout << setw(3) << 8 - i << "  ";
        cout << endl;
    }
    cout << endl;



    int N_ROW, N_COL;

    cout << "Enter current row  for the BISHOP you want to move: ";
    cin >> C_ROW;
    C_ROW--;

    cout << "Enter current column (1 TO 8 ) of the BISHOP you want to move: ";
    cin >> C_COL;
    C_COL--;



    cout << "Enter new row  where you want to move the BISHOP : ";
    cin >> N_ROW;
    N_ROW--;

    cout << "Enter the  column to move the BISHOP : ";
    cin >> N_COL;
    N_COL--;

    cout << endl;

    board[N_ROW][N_COL] = board[C_ROW][C_COL];
    board[C_ROW][C_COL] = ' ';



    cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
    for (int i = 0; i < 8; i++) {
        cout << setw(27) << i + 1 << "   ";
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << setw(3) << 8 - i << "  ";
        cout << endl;
    }


    cout << "     >>>  PLAYER 2 TURN >> :" << endl << endl;

    cout << "SELECT YOUR CHOICE IN PIECES " << endl << endl;
    cout << "1. PAWN = P" << endl;
    cout << "2. KNIGHT = N" << endl;
    cout << "3. KING = K" << endl;
    cout << "4. QUEEN = Q" << endl;
    cout << "5. ROOK = R" << endl;
    cout << "6. BISHOP = B" << endl;

    cout << endl;

    cin >> p5;

    if (p5 == 3)
    {

        char KING[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '*', '*', '*', '_', '_'},
                       {'_', '_', '_', '*', 'K', '*', '_', '_'},
                       {'_', '_', '_', '*', '*', '*', '_', '_',},
                       {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'} };

        cout << "THE MOVES FOR THE KING CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE : " << endl << endl;
        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << KING[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row  for the KING you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the KING you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the KING : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the KING : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }

    }


    else if (p5 == 1)
    {
        char paawn[4][4] = { {'_', '_', '_', '_'},
                      {'*', '$', '*', '$'},
                      {'*', '_', 'p', '_'},
                      {'p', '_', '_', '_'} };

        cout << "THE MOVES FOR THE PAWN CAN BE (*):and to capture($) " << endl << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << setw(27) << "   ";
            for (int j = 0; j < 4; j++) {
                cout << paawn[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row (2 ) of the pawn you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the pawn you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter row (3 OR 4 ) where you want to move the pawn (BUT ONLY FOR FIRST TIME): ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the same column to move the pawn: ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<<: " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
    }



    else if (p5 == 2)
    {
        char KNIGHT[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '_', '_', '*', '_', '*', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '_', '_', '_', 'N', '_', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '*', '_',},
                      {'_', '_', '_', '*', '_', '*', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '_', '_'} };

        cout << "THE MOVES FOR THE KNIGHT CAN BE (*): " << endl << endl;
        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << KNIGHT[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row  for the knight you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the knight you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the knight : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the knight : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << " >>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
    }

    else if (p5 == 5)
    {

        char ROOK[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
        { '_', '_', '_', '_', '*', '_', '_', '_' },
        { '_', '_', '_', '_', '*', '_', '_', '_' },
        { '_', '_', '_', '_', '*', '_', '_', '_' },
        { '*', '*', '*', '*', 'R', '*', '*', '*' },
        { '_', '_', '_', '_', '*', '_', '_', '_', },
        { '_', '_', '_', '_', '*', '_', '_', '_' },
        { '_', '_', '_', '_', '*', '_', '_', '_' } };



        cout << "THE MOVES FOR THE ROOK CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE : " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";

            for (int j = 0; j < 8; j++) {
                cout << ROOK[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row  for the ROOK you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the ROOK you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the ROOK : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the ROOK : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }

    }

    else if (p5 == 4)
    {
        char queen[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '*'},
                      { '_', '*', '_', '_', '*', '_', '_', '_' },
                      { '_', '_', '*', '_', '*', '_', '*', '_' },
                      { '_', '_', '_', '*', '*', '*', '_', '_' },
                      { '*', '*', '*', '*', 'Q', '*', '*', '*' },
                      { '_', '_', '_', '*', '*', '*', '_', '_', },
                      { '_', '_', '*', '_', '*', '_', '*', '_' },
                      { '_', '*', '_', '_', '*', '_', '_', '*' } };



        cout << "THE MOVES FOR THE QUEEN CAN BE (*): ?NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE ?or to capture oponent: " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << " ? ";

            for (int j = 0; j < 8; j++) {
                cout << queen[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ?";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row for the QUEEN you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the QUEEN you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row where you want to move the QUEEN : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the ?column to move the QUEEN : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>> ?{ NEW ?CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << " ? ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ?";
            cout << endl;
        }
    }

    else if (p5 == 6)
    {

        int C_ROW, C_COL;

        int p5;




        char BISHOP[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                           {'_', '*', '_', '_', '_', '_', '_', '*'},
                           {'_', '_', '*', '_', '_', '_', '*', '_'},
                           {'_', '_', '_', '*', '_', '*', '_', '_'},
                           {'_', '_', '_', '_', 'B', '_', '_', '_'},
                           {'_', '_', '_', '*', '_', '*', '_', '_',},
                           {'_', '_', '*', '_', '_', '_', '*', '_'},
                           {'_', '*', '_', '_', '_', '_', '_', '*'} };



        cout << "THE MOVES FOR THE BISHOP CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE OR OPPONENT PIECE: " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "   ";

            for (int j = 0; j < 8; j++) {
                cout << BISHOP[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row  for the BISHOP you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the BISHOP you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row  where you want to move the BISHOP : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the  column to move the BISHOP : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>>  { NEW  CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "   ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << "  ";
            cout << endl;
        }

    }

}



void move_queen()              //////queen
{
    int C_ROW, C_COL;

    int p6;




    char queen[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '*'},
                       { '_', '*', '_', '_', '*', '_', '_', '_' },
                       { '_', '_', '*', '_', '*', '_', '*', '_' },
                       { '_', '_', '_', '*', '*', '*', '_', '_' },
                       { '*', '*', '*', '*', 'Q', '*', '*', '*' },
                       { '_', '_', '_', '*', '*', '*', '_', '_', },
                       { '_', '_', '*', '_', '*', '_', '*', '_' },
                       { '_', '*', '_', '_', '*', '_', '_', '*' } };



    cout << "THE MOVES FOR THE QUEEN CAN BE (*): ?NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE ?or to capture oponent: " << endl << endl;

    for (int i = 0; i < 8; i++)
    {
        cout << setw(27) << i + 1 << " ";

        for (int j = 0; j < 8; j++) {
            cout << queen[i][j] << " ";
        }
        cout << setw(3) << 8 - i << " ";
        cout << endl;
    }
    cout << endl;



    int N_ROW, N_COL;

    cout << "Enter current row for the QUEEN you want to move: ";
    cin >> C_ROW;
    C_ROW--;

    cout << "Enter current column (1 TO 8 ) of the QUEEN you want to move: ";
    cin >> C_COL;
    C_COL--;



    cout << "Enter new row where you want to move the QUEEN : ";
    cin >> N_ROW;
    N_ROW--;

    cout << "Enter the ?column to move the QUEEN : ";
    cin >> N_COL;
    N_COL--;

    cout << endl;

    board[N_ROW][N_COL] = board[C_ROW][C_COL];
    board[C_ROW][C_COL] = ' ';



    cout << ">>>>>>>>>>>>>>> { NEW ?CHESS BOARD } <<<<<<<< " << endl << endl;
    for (int i = 0; i < 8; i++) {
        cout << setw(27) << i + 1 << "  ";
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << setw(3) << 8 - i << " ";
        cout << endl;
    }


    cout << "  >>> PLAYER 2 TURN >> :" << endl << endl;

    cout << "SELECT YOUR CHOICE IN PIECES " << endl << endl;
    cout << "1. PAWN = P" << endl;
    cout << "2. KNIGHT = N" << endl;
    cout << "3. KING = K" << endl;
    cout << "4. QUEEN = Q" << endl;
    cout << "5. ROOK = R" << endl;
    cout << "6. BISHOP = B" << endl;

    cout << endl;

    cin >> p6;

    if (p6 == 3)
    {

        char KING[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '*', '*', '*', '_', '_'},
                       {'_', '_', '_', '*', 'K', '*', '_', '_'},
                       {'_', '_', '_', '*', '*', '*', '_', '_',},
                       {'_', '_', '_', '_', '_', '_', '_', '_'},
                       {'_', '_', '_', '_', '_', '_', '_', '_'} };

        cout << "THE MOVES FOR THE KING CAN BE (*): ?NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE : " << endl << endl;
        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "  ";
            for (int j = 0; j < 8; j++) {
                cout << KING[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ";
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row for the KING you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the KING you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row where you want to move the KING : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the column to move the KING : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>> { NEW CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << " ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ";
            cout << endl;
        }

    }


    else if (p6 == 1)
    {
        char paawn[4][4] = { {'_', '_', '_', '_'},
                      {'*', '$', '*', '$'},
                      {'*', '_', 'p', '_'},
                      {'p', '_', '_', '_'} };

        cout << "THE MOVES FOR THE PAWN CAN BE (*): and to capture($) " << endl << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << setw(27) << "  ";
            for (int j = 0; j < 4; j++) {
                cout << paawn[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row (2 ) of the pawn you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the pawn you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter row (3 OR 4 ) where you want to move the pawn (BUT ONLY FOR FIRST TIME): ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the same column to move the pawn: ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>> { NEW CHESS BOARD } <<<<<<<<: " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "  ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ";
            cout << endl;
        }
    }


    else if (p6 == 2)
    {
        char KNIGHT[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '_', '_', '*', '_', '*', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '_', '_', '_', 'N', '_', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '*', '_',},
                      {'_', '_', '_', '*', '_', '*', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '_', '_'} };

        cout << "THE MOVES FOR THE KNIGHT CAN BE (*): " << endl << endl;
        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "  ";
            for (int j = 0; j < 8; j++) {
                cout << KNIGHT[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ";
            cout << endl;
        }
        cout << endl;





        cout << "Enter current row for the knight you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the knight you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row ?where you want to move the knight : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the ?column to move the knight : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << " >>>>>>>>>>>>>>> { NEW ?CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << " ? ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ?";
            cout << endl;
        }
    }

    else if (p6 == 6)
    {
        char BISHOP[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '*', '_', '_', '_', '_', '_', '*'},
                      {'_', '_', '*', '_', '_', '_', '*', '_'},
                      {'_', '_', '_', '*', '_', '*', '_', '_'},
                      {'_', '_', '_', '_', 'B', '_', '_', '_'},
                      {'_', '_', '_', '*', '_', '*', '_', '_',},
                      {'_', '_', '*', '_', '_', '_', '*', '_'},
                      {'_', '*', '_', '_', '_', '_', '_', '*'} };



        cout << "THE MOVES FOR THE BISHOP CAN BE (*): ?NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE OR OPPONENT PIECE: " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "  ";

            for (int j = 0; j < 8; j++) {
                cout << BISHOP[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row ?for the BISHOP you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the BISHOP you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row ?where you want to move the BISHOP : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the ?column to move the BISHOP : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>> ?{ NEW ?CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << " ? ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ?";
            cout << endl;
        }

    }

    else if (p6 == 4)
    {
        char queen[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '*'},
                      { '_', '*', '_', '_', '*', '_', '_', '_' },
                      { '_', '_', '*', '_', '*', '_', '*', '_' },
                      { '_', '_', '_', '*', '*', '*', '_', '_' },
                      { '*', '*', '*', '*', 'Q', '*', '*', '*' },
                      { '_', '_', '_', '*', '*', '*', '_', '_', },
                      { '_', '_', '*', '_', '*', '_', '*', '_' },
                      { '_', '*', '_', '_', '*', '_', '_', '*' } };



        cout << "THE MOVES FOR THE QUEEN CAN BE (*): ?NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE ?or to capture oponent: " << endl << endl;

        for (int i = 0; i < 8; i++)
        {
            cout << setw(27) << i + 1 << "  ";

            for (int j = 0; j < 8; j++) {
                cout << queen[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ";
            cout << endl;
        }
        cout << endl;



        int N_ROW, N_COL;

        cout << "Enter current row for the QUEEN you want to move: ";
        cin >> C_ROW;
        C_ROW--;

        cout << "Enter current column (1 TO 8 ) of the QUEEN you want to move: ";
        cin >> C_COL;
        C_COL--;



        cout << "Enter new row where you want to move the QUEEN : ";
        cin >> N_ROW;
        N_ROW--;

        cout << "Enter the ?column to move the QUEEN : ";
        cin >> N_COL;
        N_COL--;

        cout << endl;

        board[N_ROW][N_COL] = board[C_ROW][C_COL];
        board[C_ROW][C_COL] = ' ';



        cout << ">>>>>>>>>>>>>>> { NEW ?CHESS BOARD } <<<<<<<< " << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << setw(27) << i + 1 << "  ";
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << " ";
            }
            cout << setw(3) << 8 - i << " ";
            cout << endl;
        }

    }



}



void start_2() // two player
{


    // print board
    print_board();

    int choice;

    while (true)
    {
        cout << "     >>>  PLAYER 1 TURN >> :" << endl << endl;
        cout << "SELECT YOUR CHOICE IN PIECES " << endl << endl;
        cout << "1. PAWN = P" << endl;
        cout << "2. KNIGHT = N" << endl;
        cout << "3. KING = K" << endl;
        cout << "4. QUEEN = Q" << endl;
        cout << "5. ROOK = R" << endl;
        cout << "6. BISHOP = B" << endl;
        cout << " 0. EXIT " << endl;


        cout << endl;


        cin >> choice;

        if (choice == 1)
        {

            move_pawn();
        }

        if (choice == 2)
        {
            move_knight();
        }

        if (choice == 3)
        {
            move_king();
        }

        if (choice == 4)
        {
            move_queen();
        }

        if (choice == 5)
        {
            move_rook();
        }

        if (choice == 6)
        {
            move_bishop();
        }
        if (choice == 0)
        {
            cout << " GAME ENDED " << endl;
            break;
        }

    }
}
//////////////////////////////////////////////////////////////////////////




void pb()
{
    const char EMPTY = '-';
    const char PAWN = 'P';
    const char KNIGHT = 'N';
    const char BISHOP = 'B';
    const char ROOK = 'R';
    const char QUEEN = 'Q';
    const char KING = 'K';


    char board[8][8] = {
       {ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK},
       {PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN},
       {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
       {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
       {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
       {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
       {PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN},
       {ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK}
    };


    cout << setw(30) << " ";

    for (int i = 1; i <= 8; i++)
    {
        cout << i << " ";
    }
    cout << endl << endl;


    for (int i = 0; i < 8; i++)
    {
        cout << setw(27) << i + 1 << "   ";


        for (int j = 0; j < 8; j++)
        {

            cout << board[i][j] << " ";
        }
        cout << setw(3) << 8 - i << "  ";
        cout << endl;

    }
    cout << endl;



}




void knight_s2()
{
    char KNIGHT[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '_', '_'},
                      {'_', '_', '_', '*', '_', '*', '_', '_'},
                      {'_', '_', '*', '_', '_', '_', '*', '_'},
                      {'_', '_', '_', '_', 'N', '_', '_', '_'},
                      {'_', '_', '*', '_', '_', '_', '*', '_',},
                      {'_', '_', '_', '*', '_', '*', '_', '_'},
                      {'_', '_', '_', '_', '_', '_', '_', '_'} };


    cout << "THE MOVES FOR THE KNIGHT CAN BE (*): " << endl << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << setw(27) << i + 1 << "   ";
        for (int j = 0; j < 8; j++) {
            cout << KNIGHT[i][j] << " ";
        }
        cout << setw(3) << 8 - i << "  ";
        cout << endl;
    }
    cout << endl;
}


void king_s2()
{
    char KING[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                          {'_', '_', '_', '_', '_', '_', '_', '_'},
                          {'_', '_', '_', '_', '_', '_', '_', '_'},
                          {'_', '_', '_', '*', '*', '*', '_', '_'},
                          {'_', '_', '_', '*', 'K', '*', '_', '_'},
                          {'_', '_', '_', '*', '*', '*', '_', '_',},
                          {'_', '_', '_', '_', '_', '_', '_', '_'},
                          {'_', '_', '_', '_', '_', '_', '_', '_'} };

    cout << "THE MOVES FOR THE KING CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE : " << endl << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << setw(27) << i + 1 << "   ";
        for (int j = 0; j < 8; j++) {
            cout << KING[i][j] << " ";
        }
        cout << setw(3) << 8 - i << "  ";
        cout << endl;
    }
    cout << endl;

}

void queen_s2()
{
    char queen[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '*'},
                      { '_', '*', '_', '_', '*', '_', '_', '_' },
                      { '_', '_', '*', '_', '*', '_', '*', '_' },
                      { '_', '_', '_', '*', '*', '*', '_', '_' },
                      { '*', '*', '*', '*', 'Q', '*', '*', '*' },
                      { '_', '_', '_', '*', '*', '*', '_', '_', },
                      { '_', '_', '*', '_', '*', '_', '*', '_' },
                      { '_', '*', '_', '_', '*', '_', '_', '*' } };



    cout << "THE MOVES FOR THE QUEEN CAN BE (*): ?NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE ?or to capture oponent: " << endl << endl;

    for (int i = 0; i < 8; i++)
    {
        cout << setw(27) << i + 1 << " ? ";

        for (int j = 0; j < 8; j++) {
            cout << queen[i][j] << " ";
        }
        cout << setw(3) << 8 - i << " ?";
        cout << endl;
    }
}


void rook_s2()
{

    char ROOK[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
    { '_', '_', '_', '_', '*', '_', '_', '_' },
    { '_', '_', '_', '_', '*', '_', '_', '_' },
    { '_', '_', '_', '_', '*', '_', '_', '_' },
    { '*', '*', '*', '*', 'R', '*', '*', '*' },
    { '_', '_', '_', '_', '*', '_', '_', '_', },
    { '_', '_', '_', '_', '*', '_', '_', '_' },
    { '_', '_', '_', '_', '*', '_', '_', '_' } };



    cout << "THE MOVES FOR THE ROOK CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE : " << endl << endl;

    for (int i = 0; i < 8; i++)
    {
        cout << setw(27) << i + 1 << "   ";

        for (int j = 0; j < 8; j++) {
            cout << ROOK[i][j] << " ";
        }
        cout << setw(3) << 8 - i << "  ";
        cout << endl;
    }
}


void bishop_s2()
{
    char BISHOP[8][8] = { {'_', '_', '_', '_', '_', '_', '_', '_'},
                           {'_', '*', '_', '_', '_', '_', '_', '*'},
                           {'_', '_', '*', '_', '_', '_', '*', '_'},
                           {'_', '_', '_', '*', '_', '*', '_', '_'},
                           {'_', '_', '_', '_', 'B', '_', '_', '_'},
                           {'_', '_', '_', '*', '_', '*', '_', '_',},
                           {'_', '_', '*', '_', '_', '_', '*', '_'},
                           {'_', '*', '_', '_', '_', '_', '_', '*'} };



    cout << "THE MOVES FOR THE BISHOP CAN BE (*):  NOTE : BUT ONLY WHEN THERE IS EMPTY SPACE OR OPPONENT PIECE: " << endl << endl;

    for (int i = 0; i < 8; i++)
    {
        cout << setw(27) << i + 1 << "   ";

        for (int j = 0; j < 8; j++) {
            cout << BISHOP[i][j] << " ";
        }
        cout << setw(3) << 8 - i << "  ";
        cout << endl;
    }
}




void start_1()
{
    int choice_s2;
    int n;

    pb();

    while (true)
    {
        cout << "SELECT YOUR CHOICE OF PIECES " << endl << endl;

        cout << "1. KNIGHT = N" << endl;
        cout << "2. KING = K" << endl;
        cout << "3. QUEEN = Q" << endl;
        cout << "4. ROOK = R" << endl;
        cout << "5. BISHOP = B" << endl << endl;
        cout << "  0. EXIT " << endl << endl;

        cin >> choice_s2;

        if (choice_s2 == 1)
        {
            knight_s2();
        }

        else if (choice_s2 == 2)
        {
            king_s2();
        }

        else if (choice_s2 == 3)
        {
            queen_s2();
        }
        else if (choice_s2 == 4)
        {
            rook_s2();
        }

        else if (choice_s2 == 5)
        {
            bishop_s2();
        }
        else if (choice_s2 == 0)
        {
            cout << " GAME ENDED " << endl;
            break;
        }

    }



}



void start()
{
    int mode;

    cout << "\t\t\t  *  * *               *******    ******     ******        \n";
    cout << "\t\t\t *          *     *    *          *          *        \n";
    cout << "\t\t\t*           *     *    *          ******     ******         \n";
    cout << "\t\t\t*           * * * *    *****           *          *               \n";
    cout << "\t\t\t*           *     *    *               *          *                \n";
    cout << "\t\t\t *          *     *    *          ******     ******            \n";
    cout << "\t\t\t  *  * *               *******                                  \n";

    for (int i = 0; i < 120; i++)
    {
        cout << "*";
    }

    cout << endl << endl;

    cout << "                         WELCOME TO THE CHESS GAME " << endl << endl << endl;


    cout << "                1.  NEXT MOVE SHOW (PIECES)" << endl;
    cout << "                2.  TWO PLAYER GAME  " << endl << endl;

    cout << "          ENTER THE MODE YOU WANT TO PLAY " << endl;
    cin >> mode;

    if (mode == 1)
    {
        start_1();
    }
    else if (mode == 2)
    {
        start_2();
    }
}



// main to only start the game
int main()
{
    start();
    return 0;
}
