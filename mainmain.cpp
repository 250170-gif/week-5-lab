//p1
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cin>>n;
//     int i =0;
//     int number= (n%2!=0)? n:n-1;
//     while (i<number) {
//         cout<< "a";
//         i++;
//     }
//     if (n%2==0) {
//         cout<< "b";
//     }
// return 0;
//
// }
// p2
// #include <iostream>
// using namespace std;
// int main() {
//     long long x;
//     cin >> x;
//     if (x<0) {
//         cout <<"false";
//         return 0;
//     }
//     long long original = x;
//     long long reverse = 0;
//     while (x>0) {
//         long long temp = x%10;
//         reverse = reverse*10 + temp;
//         x/=10;
//
//     }
//     if (original == reverse) {
//         cout <<"true";
//     }
//     else {
//         cout <<"false";
//
//
//     }
//     return 0;
// }


// /p3
// #include <iostream>
// using namespace std;
// int main() {
//     int n, x, max_c = 0, c = 0, i =0;
//     cin >> n;
//     while (i < n) {
//         cin >> x;
//         if (x != 1){
//             i++;
//             c = 0;
//             continue;
//         }else if (c > max_c) {
//             max_c = c;
//         }
//         i++;
//         c++;
//     }
//     cout << max_c;
//     return 0;
// }
// p4
// #include <iostream>
// using namespace std;
// int main() {
//     int numB,numex;
//     cin>>numB>>numex;
//     int totalDrunk = 0;
//     int emptyBottles = 0;
//
//     while (numB> 0) {
//         totalDrunk += numB;
//         emptyBottles += numB;
//
//         numB = emptyBottles / numex;
//         emptyBottles = emptyBottles % numex;
//     }
//
//     cout << totalDrunk << endl;
//     return 0;
// }
//p5
// #include <iostream>
//
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;
//
//     int count_b = 0, count_a = 0, count_l = 0, count_o = 0, count_n = 0;
//
//     int i = 0;
//     while (i < n) {
//         char c;
//         cin >> c;
//         switch (c) {
//             case 'b': count_b++; break;
//             case 'a': count_a++; break;
//             case 'l': count_l++; break;
//             case 'o': count_o++; break;
//             case 'n': count_n++; break;
//             default: break;
//         }
//         i++;
//     }
//
//     count_l /= 2;
//     count_o /= 2;
//
//     int min_balls = count_b;
//     if (count_a < min_balls) min_balls = count_a;
//     if (count_l < min_balls) min_balls = count_l;
//     if (count_o < min_balls) min_balls = count_o;
//     if (count_n < min_balls) min_balls = count_n;
//
//     cout << min_balls << endl;
//     return 0;
// }
