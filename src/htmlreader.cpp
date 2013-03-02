#include <iostream>
#include <fstream>
#include <string>
#include "htmlreader.h"
#include "rendernode.h"
#include "painter.h"

HTMLReader::HTMLReader()
{
}

void HTMLReader::parseDocument(char HTMLFilepath[])
{

    try
    {
        std::ifstream HTMLDocument(HTMLFilepath);
        if (!HTMLDocument.is_open())
        {
            throw 0;
        }
<<<<<<< HEAD

        std::string line;
        RenderNode node;

        //For some reason, this doesn't work when I try to put it through a loop
        //and use std::getline() to read each line. This needs more investigation.
        std::getline(HTMLDocument, line);
        node.setText(line);
        Painter::paintNode(&node);
=======
        else
        {
            std::cout << "Now entering the parser." << std::endl;
        }

        std::string line;

        while (HTMLDocument.good())
        {
            std::getline(HTMLDocument, line);
            RenderObject renderNode;
            renderNode.setText(line);
        }

        HTMLDocument.close();

        Painter::drawNode(&renderNode);
>>>>>>> caf0e5f71f03e2eeef0c2e69104f8692afffc831

    }

    catch (int i)
    {
        if (i == 0)
        {
            std::cerr << "Error: Could not open the document." << std::endl;
        }
    }

}
