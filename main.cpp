#include <iostream>
using namespace std;

int main() {
    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 1- masala @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    // Int tipida massiv va n soni berilgan. Agar massivdagi elementdan 1ta oldingi va
    // 1ta keyingi elementlar shu elementga teng bolmasa, shu elementni “yolg’iz”
    // element deylik. Massivda barcha yolgiz elementlarni qoshni elementlarini kattasi
    // bilan almashtiring va massivni qaytaring.
    // notAlone([1, 2, 3], 2) → [1, 3, 3]
    // notAlone([1, 2, 3, 2, 5, 2], 2) → [1, 3, 3, 5, 5, 2]
    // notAlone([3, 4], 3) → [3, 4]
    // notAlone([1, 1, 1, 2], 1) → [1, 1, 1, 2]
    int n;
    cout << "n=";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;
    int k;
    cout << "k=";
    cin >> k;
    // notAlone([1, 2, 3], 2) → [1, 3, 3]
    // notAlone([1, 2, 3, 2, 5, 2], 2) → [1, 3, 3, 5, 5, 2]
    // notAlone([3, 4], 3) → [3, 4]
    // notAlone([1, 1, 1, 2], 1) → [1, 1, 1, 2]
    for (int i = 0; i < n - 1; ++i) {
        if (i == 0 && n > 1) {
            if (arr[i + 1] != k) {
                if (arr[i] <= arr[i + 1]) {
                    arr[i] = arr[i + 1];
                }
            }
        }
        if (i >= 1) {
            if (arr[i - 1] != k || arr[i + 1] != k) {
                if (arr[i - 1] <= arr[i + 1]) {
                    arr[i] = arr[i + 1];
                } else {
                    arr[i] = arr[i - 1];
                }
            }
        }
    }

    cout << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }


    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 2 -masala @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    // Int tipida massiv va n soni berilgan. Massivni birinchi n ta elementlar gruppasi
    // oxirgi n ta elementlar grupasiga teng bolsa true qaytaring. Bunda n ni oraligi 0
    // dan massivni uznuligigacha.
    // sameEnds([5, 6, 45, 99, 13, 5, 6], 0) → true
    // sameEnds([5, 6, 45, 99, 13, 5, 6], 1) → false
    // sameEnds([5, 6, 45, 99, 13, 5, 6], 2) → true
    // sameEnds([5, 6, 45, 99, 13, 5, 6], 3) → false

    int length;
    cout << "length:";
    cin >> length;
    int arr2[length];
    for (int i = 0; i < length; ++i) {
        cout << "arr[" << i << "]=";
        cin >> arr2[i];
    }
    int n2;
    cout << "bu gruppalash kerak bo'lgan arr elementlari soni n2=";
    cin >> n2;
    bool result = true;
    for (int i = 0; i < n2; ++i) {
        if (arr2[i] != arr2[length - (n2 - i)]) {
            result = false;
        }
    }
    cout << "Natija:" << boolalpha << result << endl;


    return 0;
}
