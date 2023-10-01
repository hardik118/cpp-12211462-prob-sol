import java.util.Scanner;

public class Question93 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        char[][] inputArray = {
            {'0', '0', '1', '0', '0'},
            {'0', '0', '1', '0', '0'},
            {'1', '1', '1', '1', '1'},
            {'0', '0', '1', '0', '0'},
            {'0', '0', '1', '0', '0'}
        };

        char[][] outputArray = rotate45DegreesAntiClockwise(inputArray);

        printArray(outputArray);
    }

    public static char[][] rotate45DegreesAntiClockwise(char[][] inputArray) {
        int n = inputArray.length;
        char[][] outputArray = new char[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x = n - 1 - j;
                int y = i;
                outputArray[x][y] = inputArray[i][j];
            }
        }

        return outputArray;
    }

    public static void printArray(char[][] array) {
        for (char[] row : array) {
            for (char c : row) {
                System.out.print(c + " ");
            }
            System.out.println();
        }
    }
}

