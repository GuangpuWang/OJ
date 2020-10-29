#include<iostream>
#include<string>

using namespace std;

int main() {
    for (int n; cin >> n;) {
        for (int j = 1; j <= n; j++) {
            string a;
            cin >> a;
            int l = a.length();
            int t = 1, p = 0, e = 0;
            if (a[0] == '.' && l == 1) t = 0;//ֻ��һ��С����
            if (a[0] == 'e' || a[0] == 'E' || a[l - 1] == 'e' || a[l - 1] == 'E') t = 0;//��βΪe E
            for (int i = 0; i < l; i++) {
                if (p && a[i] == '.') {
                    t = 0;
                    break;
                }//����С����
                if (!p && a[i] == '.' && l >= 2) p = 1;
                if (e && (a[i] == '.' || a[i] == 'e' || a[i] == 'E')) {
                    t = 0;
                    break;
                }//E������С���� ,���e E
                if (!e && (a[i] == 'e' || a[i] == 'E')) e = 1;//��һ��e E
                if ((a[i] == '+' || a[i] == '-') && i == l - 1) {
                    t = 0;
                    break;
                }//�Ӽ�����β
                if ((a[i] == '+' || a[i] == '-') && i < l - 1 && (a[i + 1] < '0' || a[i + 1] > '9')) {
                    t = 0;
                    break;
                }//�Ӽ��ź�Ϊ����
                if ((a[i] == '+' || a[i] == '-') && i != 0 &&
                    ((a[i - 1] >= '0' && a[i - 1] <= '9') || a[i - 1] == '.')) {
                    t = 0;
                    break;
                }
            }
            if (!p && !e) t = 0;
            if (t) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
