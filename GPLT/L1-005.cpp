#include <iostream>
using namespace std;
// L1-005. 考试座位号
struct student {
    string number;
    int seatNumberForTestMachine;
    int seatNumberForExam;
};
int main()
{
    int n, m;
    cin >> n;
    student* stu = new student[n];
    for(int i=0;i<n;i++){
        cin >> stu[i].number >> stu[i].seatNumberForTestMachine >> stu[i].seatNumberForExam;
    }
    cin >> m;
    for(int j=0;j<m;j++){
        int temp;
        cin >> temp;
        for(int k=0;k<n;k++) {
            if(stu[k].seatNumberForTestMachine == temp){
                cout << stu[k].number << " " << stu[k].seatNumberForExam << endl;
                break;
            }
        }
    }
    return 0;
}