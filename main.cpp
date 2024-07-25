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
    return 0;
}
