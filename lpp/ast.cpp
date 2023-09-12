#include "../Header/Token.h"
#include "../Header/ast.h"

using namespace std;

// NodeAST class
    void NodeAST::setParent(NodeAST* p)
    {
        parent = p;
    }
    void NodeAST::setLeftChild(NodeAST* lc)
    {
        leftChild = lc;
    }
    void NodeAST::setRightChild(NodeAST* rc)
    {
        rightChild = rc;
    }
    void NodeAST::setValue(Token val)
    {
        value = val;
    }
    NodeAST* NodeAST::getParent()
    {
        return parent;
    }
    NodeAST* NodeAST::getLeftChild()
    {
        return leftChild;
    }
    NodeAST* NodeAST::getRightChild()
    {
        return rightChild;
    }
    Token NodeAST::getValue()
    {
        return value;
    }


// ast class
    int ast::getPriority(string token)
    {
        if (!token.compare("=") || !token.compare("<=") || !token.compare(">=") || !token.compare("<")
            || !token.compare(">"))
            return 0;

        else if (!token.compare("+") || !token.compare("-"))
            return 1;

        else if (!token.compare("*") || !token.compare("/"))
            return 2;

        // TODO Finish the implementation of the raiz and log operand, for now, leave it there
        else if (!token.compare("^") || !token.compare("raiz") || !token.compare("log")) 
            return 3;
    }

    /* Starting index and ending index are intended for parenthesis, so we can deal with them*/
    NodeAST* ast::makeTree(vector<Token> tokens, int currentIndex, int endingIndex) // TODO finish the implementation of the makeTree() function
    {
        NodeAST currentNode;
        
    }