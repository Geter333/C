#include <stdio.h>
#include <locale.h>
#include <windows.h>

char board[3][3];

void initBoard() {
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            board[i][j] = ' ';
}

void printBoard() {
    printf("\n");
    for(int i=0; i<3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if(i < 2) printf("---+---+---\n");
    }
    printf("\n");
}

char checkWinner() {
    for(int i=0; i<3; i++) {
        if(board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0];
        if(board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return board[0][i];
    }
    if(board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0];
    if(board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2];
    return ' ';
}

int isMovesLeft() {
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(board[i][j] == ' ')
                return 1;
    return 0;
}

int main() {
   SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    initBoard();
    char player = 'X';
    int row, col;

    printf("Гра Хрестики-Нолики\n");
    printBoard();

    while(1) {
        printf("Гравець %c, введіть номер рядка і стовпця (1-3): ", player);
        if(scanf("%d %d", &row, &col) != 2) {
            printf("Невірний ввід. Спробуйте ще раз.\n");
            while(getchar() != '\n'); // очищення буфера вводу
            continue;
        }
        if(row < 1 || row > 3 || col < 1 || col > 3) {
            printf("Координати повинні бути від 1 до 3. Спробуйте ще раз.\n");
            continue;
        }
        row--; col--; // корекція індексації для масиву

        if(board[row][col] != ' ') {
            printf("Ця клітинка вже зайнята. Оберіть іншу.\n");
            continue;
        }

        board[row][col] = player;
        printBoard();

        char winner = checkWinner();
        if(winner != ' ') {
            printf("Вітаємо! Гравець %c переміг!\n", winner);
            break;
        }
        if(!isMovesLeft()) {
            printf("Нічия!\n");
            break;
        }
        player = (player == 'X') ? 'O' : 'X';
    }
    return 0;
}
