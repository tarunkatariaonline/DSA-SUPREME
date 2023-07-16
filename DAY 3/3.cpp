#include <iostream>

using namespace std;

int main()
{

    //      *
    //     ***
    //    *****
    //   *******
    //  *********
    // for(int row=1;row<=5;row++){

    // for(int space =1;space<=5-row+1;space++){
    //     cout<<" ";
    // }
    // for(int col=1;col<=(2*row-1);col++){

    //  cout<<"*";
    // }

    // cout<<endl;

    // }

    // for(int row =1;row<=5;row++){

    //      for(int space=1;space<=5-row+1;space++){
    //         cout<<" ";
    //      }
    //     for(int col=1;col<=row;col++){
    //        if(row==1||col==1||row==col)
    //         cout<<"* ";
    //         else
    //           cout<<"  ";
    //     }

    //     cout<<""<<endl;

    // }

    //      *
    //     * *
    //    *   *
    //   *     *
    //  *       *
    //  *       *
    //   *     *
    //    *   *
    //     * *
    //      *

    // for(int row =1;row<=5;row++){

    //       for(int space=1;space<=row;space++){
    //         cout<<" ";
    //      }
    //     for(int col=1;col<=5+1-row;col++){
    //        if(col==1||col==6-row)
    //         cout<<"* ";
    //         else
    //           cout<<"  ";
    //     }

    //     cout<<""<<endl;

    // }

    //

    //      1
    //     1 2
    //    1   3
    //   1     4
    //  1 2 3 4 5

    // for(int row =1;row<=5;row++){

    // for(int space = 1;space<=5-row+1;space++){
    //     cout<<" ";
    // }
    //     for(int col=1;col<=row;col++){

    //      if(row==5||row==col||col==1){
    //       cout<<col;
    //       cout<<" ";

    //      }
    //       else{
    //         cout<<"  ";
    //       }

    //     }
    //     cout<<endl;
    // }

    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********

    // for(int row =1;row<=5;row++){
    //    for(int col=1;col<=5-row+1;col++){

    //     cout<<"*";

    //    }

    //    for(int space=1;space<(2*row-1);space++){

    //     cout<<" ";
    //    }

    //     for(int col=1;col<=5-row+1;col++){

    //     cout<<"*";

    //    }

    //    cout<<""<<endl;
    // }

    // for(int row=1;row<=5;row++){
    //     for(int col=1;col<=row;col++){
    //         cout<<"*";
    //     }

    //     for(int space=1;space<=2*(5-row);space++){
    //         cout<<" ";
    //     }

    //     for(int col=1;col<=row;col++){
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    //      1
    //     121
    //    12321
    //   1234321
    //  123454321
    // for(int row =1;row<=5;row++){
    //     for(int k=1;k<=5-row+1;k++){
    //         cout<<" ";
    //     }
    //     for(int col=1;col<=row;col++){
    //           cout<<col;
    //     }

    //     for(int col2=row-1;col2>=1;col2--){
    //        cout<<col2;
    //     }

    //     cout<<endl;
    // }

    // 1
    // 2*3
    // 4*5*6
    // 7*8*9*10

    // int num=1;
    // for(int i=1;i<=4;i++){
    //     for(int j =1;j<=i;j++){

    //         cout<<num;
    //         if(i!=j){
    //             cout<<"*";
    //         }
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // 1
    // 23
    // 345
    // 4567
    // 56789
    // for(int row =1;row<=5;row++){
    //     int start = row;
    //     for(int col=1;col<=row;col++){

    //         cout<<start;
    //         start++;
    //     }

    //     cout<<endl;
    // }




// 1
// 232
// 34543
// 4567654
// 567898765
    // for (int row = 1; row <= 5; row++)
    // {
    //     int start = row;
    //     for (int col = 1; col <= row; col++)
    //     {

    //         cout << start;
    //         start++;
    //     }

    //     start = row * 2 - 1;

    //     for (int col = 1; col < row; col++)
    //     {
    //         start--;
    //         cout << start;
    //     }

    //     //  for(int col=1;col<=row-1;col++){
    //     //     start--;
    //     //     cout<<start;
    //     //  }

    //     cout << endl;
    // }

    return 0;
}