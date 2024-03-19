package Trees_Series.isTreeBalanced;

/*
 *Simple program to know that a tree is balanced or not  
 */
class Node {
    int data;
    Node leftNode;
    Node rightNode;

    public Node(int data) {
        this.data = data;
        this.leftNode = this.rightNode = null;
    }
}

class Tree {
    // supporitng function to find the left subtree height of a tree
    private int findLeftHeight(Node root) {
        if (root == null)
            return 0;

        int leftHeight = findLeftHeight(root.leftNode);

        return leftHeight;
    }

    // supproting function to find the right sub tree height
    private int findRightHeight(Node root) {
        if (root == null)
            return 0;

        int rightHeight = findRightHeight(root.rightNode);

        return rightHeight;
    }

    /*
     * function to find know weather the tree is balaced or not
     * TIME COMPLEXCCITY -- O(N*N)
     */
    public boolean isBalanced(Node root) {
        if (root == null)
            return true;

        int leftHeight = findLeftHeight(root.leftNode);
        int rightHeight = findRightHeight(root.rightNode);

        if (Math.abs(rightHeight) - Math.abs(leftHeight) > 1)
            return false;

        boolean left = isBalanced(root.leftNode);
        boolean right = isBalanced(root.rightNode);

        if (left || right)
            return false;

        return true;
    }

    /*
     * Using the concept of finding the height of a tree, whether the tree is
     * balanced or not can be checked
     * TIME COMPLEXITY -- O(N)
     */

    public boolean isBalanced2(Node root) {
        return getHeight(root) != -1;
    }

    private int getHeight(Node root) {
        if (root == null)
            return 0;

        int leftHeight = getHeight(root.leftNode);
        if (leftHeight == -1)
            return -1;

        int rightHeight = getHeight(root.rightNode);
        if (rightHeight == -1)
            return -1;

        if (Math.abs(rightHeight - leftHeight) > 1)
            return -1;

        return Math.max(leftHeight, rightHeight) + 1;
    }

}

public class Balanced {
    public static void main(String[] args) {
        Node root = new Node(10);
        root.leftNode = new Node(20);
        root.rightNode = new Node(30);
        root.leftNode.leftNode = new Node(40);

        Tree t = new Tree();
        if (t.isBalanced2(root)) {
            System.out.println("Tree is balanced");
        } else {
            System.out.println("Tree is not balanced ");
        }

    }
}
