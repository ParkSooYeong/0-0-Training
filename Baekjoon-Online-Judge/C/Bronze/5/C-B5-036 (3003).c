#include <stdio.h>

int main(void)
{
    int black_king = 1;
    int black_queen = 1;
    int black_rook = 2;
    int black_bishop = 2;
    int black_knight = 2;
    int black_pawn = 8;

    int white_king = 0;
    int white_queen = 0;
    int white_rook = 0;
    int white_bishop = 0;
    int white_knight = 0;
    int white_pawn = 0;

    scanf("%d %d %d %d %d %d", &white_king, &white_queen, &white_rook, &white_bishop, &white_knight, &white_pawn);
    printf("%d %d %d %d %d %d", black_king - white_king, black_queen - white_queen, black_rook - white_rook, black_bishop - white_bishop, black_knight - white_knight, black_pawn - white_pawn);

    return 0;
}
