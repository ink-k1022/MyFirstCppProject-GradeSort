#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Number of students：";
    cin >> n;

    string* names = new string[n];
    int* scores = new int[n];//動態陣列儲存名字&分數

    for (int i = 0; i < n; i++) {
        cout << "姓名：";
        cin >> names[i];
        cout << "成績：";
        cin >> scores[i];
    }//用迴圈輸入資料

    int total = 0;
    int maxScore = 0;
    for (int i = 0; i < n; i++) {
        total += scores[i];
        if (scores[i] > maxScore){
            maxScore = scores[i];
        }
    }
    int AverageScore=total / n;
    cout << "average：" <<AverageScore<< endl;
    cout << "MaxScore" << maxScore << endl;

    delete[] names;
    delete[] scores;//歸還記憶體
    return 0;
}
