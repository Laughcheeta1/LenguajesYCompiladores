#ifndef AST_H
#define AST_H
#include "Token.h"
#include <vector>

class NodeAST
{
    private:
        NodeAST* parent;
        NodeAST* leftChild;
        NodeAST* rightChild;
        Token value;

    public:
        // Constructor, getters and setters
        explicit NodeAST(NodeAST* par, NodeAST* lc, NodeAST* rc, Token val);
        void setParent(NodeAST* p);
        void setLeftChild(NodeAST* lc);
        void setRightChild(NodeAST* rc);
        void setValue(Token val);
        NodeAST* getParent();
        NodeAST* getLeftChild();
        NodeAST* getRightChild();
        Token getValue(); 
};

class ast
{
    private:
        int currentIndex;
        int size;
        std::vector<Token> tokens;
        explicit ast(std::vector<Token> tok);
        int getPriority(std::string token); // Returns the priority of the expression in the following range [0, 4]
        NodeAST* placeOperand(NodeAST* previous, Token token); // Places the operand in the place it should
                                                                // be, with the sons it should have.
        NodeAST* getRoot(NodeAST* node); // Returns the head of the tree you created

        // This function itself checks for the types of variable each things is, so we do not have to worry about it
        NodeAST* makeTree(); // Returns a pointer to the head node of the tree

    public:
        static NodeAST* makeTree(std::vector<Token> tok); // Returns a pointer to the head node of the tree
        static void freeTree(NodeAST* currentNode); // Given the head node of the tree, frees all the memory
            // I'm declaring a class by the keyword "new"

};
#endif