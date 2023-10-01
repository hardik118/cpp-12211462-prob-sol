import java.util.Scanner;

public class Question93 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        char[][] iArray = {
            {'0', '0', '1', '0', '0'},
            {'0', '0', '1', '0', '0'},
            {'1', '1', '1', '1', '1'},
            {'0', '0', '1', '0', '0'},
            {'0', '0', '1', '0', '0'}
        };

        char[][] oArray = rotate(iArray);

        print(Array);
    }

    public static char[][] rotate(char[][] inputArray) {
        int n = iArray.length;
        char[][] oArray = new char[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x = 2 * i - n + 1;
                int y = 2 * j - n + 1;
                oArray[x][y] = iArray[i][j];
            }
        }

        return oArray;
    }

    public static void print(char[][] array) {
        for (char[] row : array) {
            for (char c : row) {
                System.out.print(c + " ");
            }
            System.out.println();
        }
    }
}

