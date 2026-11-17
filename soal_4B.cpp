#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

//IN-ORDER
void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->kiri);
        cout << root->data << " ";
        inOrder(root->kanan);
    }
}

void tambah(Node*& root, int angka) {
    if (root == NULL) {
        root = new Node();
        root->data = angka;
        root->kiri = NULL;
        root->kanan = NULL;

        return;
    } 
    
    // inputan lebih kecil dari data root
    else if (angka < root->data) {
        tambah(root->kiri, angka);

    // inputan lebih besar dari data root
    } else {
        tambah(root->kanan, angka);
    }

    return;
}

int main() {
    system("cls");
    Node* root = NULL;
    int angka, nilai, max, min;
    cout << "Masukkan angka (negatif untuk berhenti): ";
    cin >> angka;

    while (angka >= 0) {
        tambah(root, angka);
        cin >> angka;
    }

    cout << "In Order : ";
    inOrder(root);


    cout << endl;

    cout << "Cek nilai : ";
    cin >> nilai;

    if (nilai != angka) {
        cout << "Nilai tersebut tidak ada";
    } else {
        cout << "Nilai tersebut ada";
    }

    return 0;
}