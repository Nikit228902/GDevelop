/**
 *  Game Develop
 *  2008-2010 Florian Rival (Florian.Rival@gmail.com)
 */

#ifndef ERRORREPORT_H
#define ERRORREPORT_H

#include <string>
#include <vector>

using namespace std;

/**
 * Nearly deprecated class to report errors.
 * Need to use a better error handling system for Runtime
 */
class GD_API ErrorReport
{
    public:
        ErrorReport();
        virtual ~ErrorReport();

        void Add(string pMess, string pImage, string pObjet, int pEvent, int pNiveau);

        vector < string > messages;
        vector < string > image;
        vector < string > objet;
        vector < int > event;
        vector < int > niveau;

    protected:
    private:



};

#endif // ERRORREPORT_H
