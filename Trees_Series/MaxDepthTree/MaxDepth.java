
/*
 * SIMPLE JAVA PROGRAM TO FIND THE DEPTH OF A TREE USING RECURSSION 
 */
class Node {
    int data;
    Node leftNode;
    Node rightNode;

    public Node(int data) {
        this.data = data;
        this.leftNode = this.rightNode = null;
    }

    /*
     * FUNCTION TO FIND THE MAX DEPTH OF A TREE
     */
    int MaxDepth(Node root) {
        if (root == null)
            return 0;

        int leftHeight = MaxDepth(root.leftNode);
        int rightHeight = MaxDepth(root.rightNode);

        return Math.max(leftHeight, rightHeight) + 1;
    }
}

public class MaxDepth {
    public static void main(String[] args) {
        Node root = new Node(10);
        root.leftNode = new Node(20);
        root.rightNode = new Node(30);
        root.leftNode.leftNode = new Node(40);

        System.out.println("The depth of a tree : " + root.MaxDepth(root));
    }
}
