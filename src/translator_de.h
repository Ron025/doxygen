/******************************************************************************
 *
 * 
 *
 * Copyright (C) 1997-2002 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby 
 * granted. No representations are made about the suitability of this software 
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * Documents produced by Doxygen are derivative works derived from the
 * input used in their production; they are not affected by this license.
 *
 * The translation into German was provided by
 *   Jens Breitenstein (Jens.Breitenstein@tlc.de)
 */

// Updates:
// --------
//   RK (who are you?)
//    - Update for "new since 1.1.3" version
//
//   2001/03/23 Jens Seidel (jensseidel@users.sourceforge.net)
//    - fixed typos
//    - changed trPageDocumentation() "Seitenbeschreibung" to
//      "Zus�tzliche Informationen"
//    - removed old trGeneratedFrom()
//    - changed "/*!" to "/*" (documentation is inherited from translator_en.h
//      (INHERIT_DOCS = YES), there's no need to make changes twice)
//    - Update for "new since 1.2.4" version
//
//   2001/04/17 Jens Seidel (jensseidel@users.sourceforge.net)
//    - fixed typos ("Vererbunsbeziehung", "gesch&uumltzter")
//    - use umlauts instead of html code ("&auml;",...)
//      this makes it easier to read and fixes three problems (two in 
//      \code segment)
//
//   2001/04/23 Jens Seidel (jensseidel@users.sourceforge.net)
//    - Update for "new since 1.2.6-20010422" version
//
//   2001/05/06 Jens Seidel (jensseidel@users.sourceforge.net)
//    - Update for "new since 1.2.7" version
//    - Removed implementation of latexBabelPackage(), trVerbatimText(),
//      trFiles(), added latexLanguageSupportCommand().
//
//   2001/05/25 Jens Seidel (jensseidel@users.sourceforge.net)
//    - Update for "new since 1.2.7-20010524" version:
//      removed trAuthors(), trAuthor(), added trAuthor(bool, bool)
//
//   2001/07/24 Jens Seidel (jensseidel@users.sourceforge.net)
//    - trClassDocumentation() updated as in the English translator.
//
//  2001/11/30 Oliver Brandt (o.brandt@tu-bs.de) and
//             Jens Seidel (jensseidel@users.sourceforge.net)
//    - trReferences() implemented.
//    - trCompoundReference(), trLegendDocs() updated
//    - Removed some TODO's
//
//  2002/02/13 Oliver Brandt (o.brandt@tu-bs.de)
//    - Updated for "new since 1.2.13" version
//    - Removed some TODO's
//
// Todo:
//   - see FIXME

#ifndef TRANSLATOR_DE_H
#define TRANSLATOR_DE_H

class TranslatorGerman : public Translator
{
  public:

    // --- Language control methods -------------------

    /* Used for identification of the language. The identification
     * should not be translated. It should be replaced by the name
     * of the language in English using lower-case characters only
     * (e.g. "czech", "japanese", "russian", etc.). It should be equal to
     * the identification used in language.cpp.
     */
    virtual QCString idLanguage()
    { return "german"; }

    /*  Used to get the LaTeX command(s) for the language support. This method
     *  was designed for languages which do wish to use a babel package.
     */
    virtual QCString latexLanguageSupportCommand()
    {
      return "\\usepackage{german}\n";
    }

    /*  return the language charset. This will be used for the HTML output */
    virtual QCString idLanguageCharset()
    {
      return "iso-8859-1";
    }

    // --- Language translation methods -------------------

    /* used in the compound documentation before a list of related functions. */
    virtual QCString trRelatedFunctions()
    { return "Verwandte Funktionen"; }

    /* subscript for the related functions. */
    virtual QCString trRelatedSubscript()
    { return "(Es handelt sich hierbei nicht um Elementfunktionen.)"; }

    /* header that is put before the detailed description of files, classes and namespaces. */
    virtual QCString trDetailedDescription()
    { return "Ausf�hrliche Beschreibung"; }

    /* header that is put before the list of typedefs. */
    virtual QCString trMemberTypedefDocumentation()
    { return "Dokumentation der benutzerdefinierten Datentypen"; }
    
    /* header that is put before the list of enumerations. */
    virtual QCString trMemberEnumerationDocumentation()
    { return "Dokumentation der Aufz�hlungstypen"; }

    /* header that is put before the list of member functions. */
    virtual QCString trMemberFunctionDocumentation()
    { return "Dokumentation der Elementfunktionen"; }

    /* header that is put before the list of member attributes. */
    virtual QCString trMemberDataDocumentation()
    { /* No difference if "OPTIMIZE_OUTPUT_FOR_C" is set! */
      return "Dokumentation der Datenelemente";
    }

    /* this is the text of a link put after brief descriptions. */
    virtual QCString trMore()
    { return "Mehr..."; }

    /* put in the class documentation */
    virtual QCString trListOfAllMembers()
    { return "Aufstellung aller Elemente"; }

    /* used as the title of the "list of all members" page of a class */
    virtual QCString trMemberList()
    { return "Elementverzeichnis"; }

    /* this is the first part of a sentence that is followed by a class name */
    virtual QCString trThisIsTheListOfAllMembers()
    { return "Vollst�ndige Aufstellung aller Elemente f�r "; }

    /* this is the remainder of the sentence after the class name */
    virtual QCString trIncludingInheritedMembers()
    { return " einschlie�lich aller geerbten Elemente."; }

    /*  this is put at the author sections at the bottom of man pages.
     *  parameter s is name of the project name.
     */
    virtual QCString trGeneratedAutomatically(const char *s)
    { QCString result="Automatisch erzeugt von Doxygen";
      if (s) result+=(QCString)" f�r "+s;
      result+=" aus dem Quellcode.";
      return result;
    }

    /* put after an enum name in the list of all members */
    virtual QCString trEnumName()
    { return "enum Bezeichner"; }

    /* put after an enum value in the list of all members */
    virtual QCString trEnumValue()
    { return "enum Wert"; }

    /* put after an undocumented member in the list of all members */
    virtual QCString trDefinedIn()
    { return "Definiert in"; }

    // quick reference sections

    /*  This is put above each page as a link to the list of all groups of 
     *  compounds or files (see the \group command).
     */
    virtual QCString trModules()
    { return "Module"; }

    /* This is put above each page as a link to the class hierarchy */
    virtual QCString trClassHierarchy()
    { return "Klassenhierarchie"; }

    /* This is put above each page as a link to the list of annotated classes */
    virtual QCString trCompoundList()
    {
      if (Config_getBool("OPTIMIZE_OUTPUT_FOR_C"))
      {
        return "Datenstrukturen";
      }
      else
      {
        return "�bersicht";
      }
    }

    /* This is put above each page as a link to the list of documented files */
    virtual QCString trFileList()
    { return "Auflistung der Dateien"; }

    /* This is put above each page as a link to the list of all verbatim headers */
    virtual QCString trHeaderFiles()
    { return "Auflistung der Header-Dateien"; }

    /* This is put above each page as a link to all members of compounds. */
    virtual QCString trCompoundMembers()
    {
      if (Config_getBool("OPTIMIZE_OUTPUT_FOR_C"))
      {
        return "Datenstruktur-Elemente";
      }
      else
      {
        return "Datenstruktur-Elemente";
      }
    }

    /* This is put above each page as a link to all members of files. */
    virtual QCString trFileMembers()
    /* No difference if "OPTIMIZE_OUTPUT_FOR_C" is set! */
    { return "Datei-Elemente"; }

    /* This is put above each page as a link to all related pages. */
    virtual QCString trRelatedPages()
    { return "Zus�tzliche Informationen"; }

    /* This is put above each page as a link to all examples. */
    virtual QCString trExamples()
    { return "Beispiele"; }

    /* This is put above each page as a link to the search engine. */
    virtual QCString trSearch()
    { return "Suchen"; }

    /* This is an introduction to the class hierarchy. */
    virtual QCString trClassHierarchyDescription()
    { return "Die Liste der Ableitungen ist -mit Einschr�nkungen- "
             "alphabetisch sortiert:";
    }

    /* This is an introduction to the list with all files. */
    virtual QCString trFileListDescription(bool extractAll)
    {
      QCString result="Hier folgt die Aufz�hlung aller ";
      if (!extractAll) result+="dokumentierten ";
      result+="Dateien mit einer Kurzbeschreibung:";
      return result;
    }

    /* This is an introduction to the annotated compound list. */
    virtual QCString trCompoundListDescription()
    { 
      if (Config_getBool("OPTIMIZE_OUTPUT_FOR_C"))
	return "Hier folgt die Aufz�hlung aller Datenstrukturen "
	       "mit einer Kurzbeschreibung:";
      else
	return "Hier folgt die Aufz�hlung aller Klassen, Strukturen, "
	       "Varianten und Schnittstellen mit einer Kurzbeschreibung:";
    }

    /* This is an introduction to the page with all class members. */
    virtual QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="Hier folgt die Aufz�hlung aller ";
      if (!extractAll) result+="dokumentierten ";
      if (Config_getBool("OPTIMIZE_OUTPUT_FOR_C"))
        result+="Strukturen und Varianten mit Verweisen auf ";
      else
        result+="Klassenelemente mit Verweisen auf ";
      if (extractAll) {
        if (Config_getBool("OPTIMIZE_OUTPUT_FOR_C"))
          result+="die Dokumentation zu jedem Element:";
        else 
          result+="die Klassendokumentation zu jedem Element:";
      } else { 
        if (Config_getBool("OPTIMIZE_OUTPUT_FOR_C"))
          result+="die zugeh�rigen Elemente:";
        else
          result+="die zugeh�rigen Klassen:";
      }
      return result;
    }

    /* This is an introduction to the page with all file members. */
    virtual QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="Hier folgt die Aufz�hlung aller ";
      if (!extractAll) result+="dokumentierten ";
      if (Config_getBool("OPTIMIZE_OUTPUT_FOR_C"))
      {
        result+="Funktionen, Variablen, Makros, Aufz�hlungen und Typendefinitionen mit Verweisen auf ";
      }
      else
      {
        result+="Dateielemente mit Verweisen auf ";
      }
      if (extractAll) result+="die Dokumentation zu jedem Element:";
      else result+="die zugeh�rigen Dateien:";
      return result;
    }

    /* This is an introduction to the page with the list of all header files. */
    virtual QCString trHeaderFilesDescription()
    { return "Hier folgen die Headerdateien, welche die API definieren:"; }

    /* This is an introduction to the page with the list of all examples */
    virtual QCString trExamplesDescription()
    { return "Hier folgt eine Liste mit allen Beispielen:"; }

    /* This is an introduction to the page with the list of related pages */
    virtual QCString trRelatedPagesDescription()
    { return "Hier folgt eine Liste mit zusammengeh�rigen Themengebieten:"; }

    /* This is an introduction to the page with the list of class/file groups */
    virtual QCString trModulesDescription()
    { return "Hier folgt die Aufz�hlung aller Module:"; }

    /* This sentences is used in the annotated class/file lists if no brief
     * description is given. 
     */
    virtual QCString trNoDescriptionAvailable()
    { return "Keine Beschreibung verf�gbar"; }

    // index titles (the project name is prepended for these)
  
    /* This is used in HTML as the title of index.html. */ 
    virtual QCString trDocumentation()
    { return "Dokumentation"; }

    /* This is used in LaTeX as the title of the chapter with the 
     * index of all groups.
     */
    virtual QCString trModuleIndex()
    { return "Modul-Verzeichnis"; }

    /* This is used in LaTeX as the title of the chapter with the 
     * class hierarchy.
     */
    virtual QCString trHierarchicalIndex()
    { return "Hierarchie-Verzeichnis"; }

    /* This is used in LaTeX as the title of the chapter with the 
     * annotated compound index.
     */
    virtual QCString trCompoundIndex()
    /* No difference if "OPTIMIZE_OUTPUT_FOR_C" is set! */
    {
	    return "Datenstruktur-Verzeichnis";
    }

    /* This is used in LaTeX as the title of the chapter with the
     * list of all files.
     */
    virtual QCString trFileIndex()
    { return "Datei-Verzeichnis"; }

    /*  This is used in LaTeX as the title of the chapter containing
     *  the documentation of all groups.
     */
    virtual QCString trModuleDocumentation()
    { return "Modul-Dokumentation"; }

    /*  This is used in LaTeX as the title of the chapter containing
     *  the documentation of all classes, structs and unions.
     */
    virtual QCString trClassDocumentation()
    { 
      if (Config_getBool("OPTIMIZE_OUTPUT_FOR_C"))
        return "Datenstruktur-Dokumentation"; 
      else
        return "Klassen-Dokumentation";
    }

    /*  This is used in LaTeX as the title of the chapter containing
     *  the documentation of all files.
     */
    virtual QCString trFileDocumentation()
    { return "Datei-Dokumentation"; }

    /* This is used in LaTeX as the title of the chapter containing
     *  the documentation of all examples.
     */
    virtual QCString trExampleDocumentation()
    { return "Dokumentation der Beispiele"; }

    /*  This is used in LaTeX as the title of the chapter containing
     *  the documentation of all related pages.
     */
    virtual QCString trPageDocumentation()
    { return "Zus�tzliche Informationen"; }

    /* This is used in LaTeX as the title of the document */
    virtual QCString trReferenceManual()
    { return "Nachschlagewerk"; }

    /*  This is used in the documentation of a file as a header before the 
     *  list of defines
     */
    virtual QCString trDefines()
    { return "Makrodefinitionen"; }

    /*  This is used in the documentation of a file as a header before the 
     *  list of function prototypes
     */
    virtual QCString trFuncProtos()
    { return "Funktionsprototypen"; }

    /*  This is used in the documentation of a file as a header before the 
     *  list of typedefs
     */
    virtual QCString trTypedefs()
    { return "Typendefinitionen"; }

    /*  This is used in the documentation of a file as a header before the 
     *  list of enumerations
     */
    virtual QCString trEnumerations()
    { return "Aufz�hlungen"; }

    /*  This is used in the documentation of a file as a header before the 
     *  list of (global) functions
     */
    virtual QCString trFunctions()
    { return "Funktionen"; }

    /*  This is used in the documentation of a file as a header before the 
     *  list of (global) variables
     */
    virtual QCString trVariables()
    { return "Variablen"; }

    /*  This is used in the documentation of a file as a header before the 
     *  list of (global) variables
     */
    virtual QCString trEnumerationValues()
    { return "Aufz�hlungswerte"; }

    /*  This is used in the documentation of a file before the list of
     *  documentation blocks for defines
     */
    virtual QCString trDefineDocumentation()
    { return "Makro-Dokumentation"; }

    /*  This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for function prototypes
     */
    virtual QCString trFunctionPrototypeDocumentation()
    { return "Funktionsprototypen Dokumentation"; }

    /*  This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for typedefs
     */
    virtual QCString trTypedefDocumentation()
    { return "Dokumentation der benutzerdefinerten Typen"; }

    /*  This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for enumeration types
     */
    virtual QCString trEnumerationTypeDocumentation()
    { return "Dokumentation der Aufz�hlungstypen"; }

    /*  This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for enumeration values
     */
    virtual QCString trEnumerationValueDocumentation()
    { return "Dokumentation des Wertebereiches der Aufz�hlungstypen"; }

    /*  This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for functions
     */
    virtual QCString trFunctionDocumentation()
    { return "Dokumentation der Funktionen"; }

    /*  This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for variables
     */
    virtual QCString trVariableDocumentation()
    { return "Variablen-Dokumentation"; }

    /*  This is used in the documentation of a file/namespace/group before 
     *  the list of links to documented compounds
     */
    virtual QCString trCompounds()
    {
      if (Config_getBool("OPTIMIZE_OUTPUT_FOR_C"))
      {
        return "Datenstrukturen";
      }
      else
      {
        return "�bersicht";
      }
    }

    /*  This is used in the standard footer of each page and indicates when 
     *  the page was generated 
     */
    virtual QCString trGeneratedAt(const char *date,const char *projName)
    {
      QCString result=(QCString)"Erzeugt am "+date;
      if (projName) result+=(QCString)" f�r "+projName;
      result+=(QCString)" von";
      return result;
    }

    /* This is part of the sentence used in the standard footer of each page.
     */
    virtual QCString trWrittenBy()
    {
      return "geschrieben von";
    }

    /* this text is put before a class diagram */
    virtual QCString trClassDiagram(const char *clName)
    {
      return (QCString)"Klassendiagramm f�r "+clName+":";
    }

    /* this text is generated when the \internal command is used. */
    virtual QCString trForInternalUseOnly()
    { return "Nur f�r den internen Gebrauch."; }

    /* this text is generated when the \reimp command is used. */
    virtual QCString trReimplementedForInternalReasons()
    { return "Aus internen Gr�nden neu implementiert. "
             "Das API wird davon nicht ber�hrt."; }

    /* this text is generated when the \warning command is used. */
    virtual QCString trWarning()
    { return "Warnung"; }

    /* this text is generated when the \bug command is used. */
    virtual QCString trBugsAndLimitations()
    { return "Fehler und Einschr�nkungen"; }

    /* this text is generated when the \version command is used. */
    virtual QCString trVersion()
    { return "Version"; }

    /* this text is generated when the \date command is used. */
    virtual QCString trDate()
    { return "Datum"; }

    /* this text is generated when the \return command is used. */
    virtual QCString trReturns()
    { return "R�ckgabe"; }

    /* this text is generated when the \sa command is used. */
    virtual QCString trSeeAlso()
    { return "Siehe auch"; }

    /* this text is generated when the \param command is used. */
    virtual QCString trParameters()
    { return "Parameter"; }

    /* this text is generated when the \exception command is used. */
    virtual QCString trExceptions()
    { return "Ausnahmebehandlung"; }

    /* this text is used in the title page of a LaTeX document. */
    virtual QCString trGeneratedBy()
    { return "Erzeugt von"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990307
//////////////////////////////////////////////////////////////////////////

    /* used as the title of page containing all the index of all namespaces. */
    virtual QCString trNamespaceList()
    { return "Liste aller Namensbereiche"; }

    /* used as an introduction to the namespace list */
    virtual QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="Liste aller ";
      if (!extractAll) result+="dokumentierten ";
      result+="Namensbereiche mit Kurzbeschreibung:";
      return result;
    }

    /*  used in the class documentation as a header before the list of all
     *  friends of a class
     */
    virtual QCString trFriends()
    { return "Freundbeziehungen"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////

    /* used in the class documentation as a header before the list of all
     * related classes 
     */
    virtual QCString trRelatedFunctionDocumentation()
    { return "Freundbeziehungen und Funktionsdokumentation"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    /* used as the title of the HTML page of a class/struct/union */
    virtual QCString trCompoundReference(const char *clName,
                                 ClassDef::CompoundType compType,
                                 bool isTemplate)
    {
      QCString result=(QCString)clName+" ";
      if (isTemplate) result+="Template ";
      switch(compType)
      {
        case ClassDef::Class:  result+="Klassen"; break;
        case ClassDef::Struct: result+="Struktur"; break;
        case ClassDef::Union:  result+="Varianten"; break;
        case ClassDef::Interface:  result+="Schnittstellen"; break;
        case ClassDef::Exception:  result+="Ausnahmen"; break;
      }
      result+="referenz";
      return result;
    }

    /* used as the title of the HTML page of a file */
    virtual QCString trFileReference(const char *fileName)
    {
      QCString result=fileName;
      result+=" Dateireferenz";
      return result;
    }

    /* used as the title of the HTML page of a namespace */
    virtual QCString trNamespaceReference(const char *namespaceName)
    {
      QCString result=namespaceName;
      result+=" Namensbereichsreferenz";
      return result;
    }

    // these are for the member sections of a class, struct or union
    virtual QCString trPublicMembers()
    { return "�ffentliche Datenelemente"; }

    virtual QCString trPublicSlots()
    { return "�ffentliche Slots"; }

    virtual QCString trSignals()
    { return "Signale"; }

    virtual QCString trStaticPublicMembers()
    { return "�ffentliche, statische Datenelemente"; }

    virtual QCString trProtectedMembers()
    { return "Gesch�tzte Datenelemente"; }

    virtual QCString trProtectedSlots()
    { return "Gesch�tzte Slots"; }

    virtual QCString trStaticProtectedMembers()
    { return "Gesch�tzte, statische Datenelemente"; }

    virtual QCString trPrivateMembers()
    { return "Private Datenelemente"; }

    virtual QCString trPrivateSlots()
    { return "Private Slots"; }

    virtual QCString trStaticPrivateMembers()
    { return "Private, statische Datenelemente"; }

    // end of member sections

    /*  this function is used to produce a comma-separated list of items.
     *  use generateMarker(i) to indicate where item i should be put.
     */
    virtual QCString trWriteList(int numEntries)
    {
      QCString result;
      int i;
      // the inherits list contain `numEntries' classes
      for (i=0;i<numEntries;i++)
      {
        // use generateMarker to generate placeholders for the class links!
        result+=generateMarker(i); // generate marker for entry i in the list
                                   // (order is left to right)

        if (i!=numEntries-1)  // not the last entry, so we need a separator
        {
          if (i<numEntries-2) // not the fore last entry
            result+=", ";
          else                // the fore last entry
            result+=" und ";
        }
      }
      return result;
    }

    /*  used in class documentation to produce a list of base classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritsList(int numEntries)
    {
      return "Abgeleitet von "+trWriteList(numEntries)+".";
    }

    /*  used in class documentation to produce a list of super classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritedByList(int numEntries)
    {
      return "Basisklasse f�r "+trWriteList(numEntries)+".";
    }

    /*  used in member documentation blocks to produce a list of 
     *  members that are hidden by this one.
     */
    virtual QCString trReimplementedFromList(int numEntries)
    {
      return "Erneute Implementation von "+trWriteList(numEntries)+".";
    }

    /*  used in member documentation blocks to produce a list of
     *  all member that overwrite the implementation of this member.
     */
    virtual QCString trReimplementedInList(int numEntries)
    {
      return "Erneute Implementation in "+trWriteList(numEntries)+".";
    }

    /* This is put above each page as a link to all members of namespaces. */
    virtual QCString trNamespaceMembers()
    { return "Elemente eines Namensbereiches"; }

    /* This is an introduction to the page with all namespace members */
    virtual QCString trNamespaceMemberDescription(bool extractAll)
    {
      QCString result="Hier folgt die Aufz�hlung aller ";
      if (!extractAll) result+="dokumentierten ";
      result+="Namensbereichselemente mit Verweisen auf ";
      if (extractAll)
        result+="die Namensbereichsdokumentation f�r jedes Element:";
      else
        result+="die zugeh�rigen Dateien:";
      return result;
    }

    /*  This is used in LaTeX as the title of the chapter with the 
     *  index of all namespaces.
     */
    virtual QCString trNamespaceIndex()
    { return "Verzeichnis der Namensbereiche"; }

    /*  This is used in LaTeX as the title of the chapter containing
     *  the documentation of all namespaces.
     */
    virtual QCString trNamespaceDocumentation()
    { return "Dokumentation der Namensbereiche"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990522
//////////////////////////////////////////////////////////////////////////

    /*  This is used in the documentation before the list of all
     *  namespaces in a file.
     */
    virtual QCString trNamespaces()
    { return "Namensbereiche"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990728
//////////////////////////////////////////////////////////////////////////

    /*  This is put at the bottom of a class documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    virtual QCString trGeneratedFromFiles(ClassDef::CompoundType compType,
        bool single)
    { // here s is one of " Class", " Struct" or " Union"
      // single is true implies a single file
      QCString result=(QCString)"Die Dokumentation f�r diese";
      switch(compType)
      {
        case ClassDef::Class:      result+=" Klasse"; break;
        case ClassDef::Struct:     result+=" Struktur"; break;
        case ClassDef::Union:      result+=" Variante"; break;
        case ClassDef::Interface:  result+=" Schnittstelle"; break;
        case ClassDef::Exception:  result+=" Ausnahme"; break;
      }
      result+=" wurde erzeugt aufgrund der Datei";
      if (single) result+=":"; else result+="en:";
      return result;
    }

    /* This is in the (quick) index as a link to the alphabetical compound
     * list.
     */
    virtual QCString trAlphabeticalList()
    { return "Alphabetische Liste"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /* This is used as the heading text for the retval command. */
    virtual QCString trReturnValues()
    { return "R�ckgabewerte"; }

    /* This is in the (quick) index as a link to the main page (index.html)
     */
    virtual QCString trMainPage()
    { return "Hauptseite"; }

    /*  This is used in references to page that are put in the LaTeX 
     *  documentation. It should be an abbreviation of the word page.
     */
    virtual QCString trPageAbbreviation()
    { return "S."; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991003
//////////////////////////////////////////////////////////////////////////

    virtual QCString trSources()
    {
      return "Quellen";
    }

    virtual QCString trDefinedAtLineInSourceFile()
    {
      return "Definiert in Zeile @0 der Datei @1.";
    }

    virtual QCString trDefinedInSourceFile()
    {
      return "Definiert in Datei @0.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991205
//////////////////////////////////////////////////////////////////////////

    virtual QCString trDeprecated()
    {
      return "Veraltet";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.0.0
//////////////////////////////////////////////////////////////////////////

    /* this text is put before a collaboration diagram */
    virtual QCString trCollaborationDiagram(const char *clName)
    {
      return (QCString)"Zusammengeh�rigkeiten von "+clName+":";
    }

    /* this text is put before an include dependency graph */
    virtual QCString trInclDepGraph(const char *fName)
    {
      return (QCString)"Include-Abh�ngigkeitsdiagramm f�r "+fName+":";
    }

    /* header that is put before the list of constructor/destructors. */
    virtual QCString trConstructorDocumentation()
    {
      return "Beschreibung der Konstruktoren und Destruktoren"; 
    }

    /* Used in the file documentation to point to the corresponding sources. */
    virtual QCString trGotoSourceCode()
    {
      return "gehe zum Quellcode dieser Datei";
    }

    /* Used in the file sources to point to the corresponding documentation. */
    virtual QCString trGotoDocumentation()
    {
      return "gehe zur Dokumentation dieser Datei";
    }

    /* Text for the \pre command */
    virtual QCString trPrecondition()
    {
      return "Vorbedingung";
    }

    /* Text for the \post command */
    virtual QCString trPostcondition()
    {
      return "Nachbedingung";
    }

    /* Text for the \invariant command */
    virtual QCString trInvariant()
    {
      return "Invariant";
    }

    /* Text shown before a multi-line variable/enum initialization */
    virtual QCString trInitialValue()
    {
      return "Initialisierung:";
    }

    /* Text used the source code in the file index */
    virtual QCString trCode()
    {
      return "code";
    }

    virtual QCString trGraphicalHierarchy()
    {
      return "Grafische Darstellung der Klassenhierarchie";
    }

    virtual QCString trGotoGraphicalHierarchy()
    {
      return "gehe zur grafischen Darstellung der Klassenhierarchie";
    }

    virtual QCString trGotoTextualHierarchy()
    {
      return "gehe zur textbasierten Darstellung der Klassenhierarchie";
    }

    virtual QCString trPageIndex()
    {
      return "Seitenindex";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.0
//////////////////////////////////////////////////////////////////////////

    //RK: had to change here because of the new command \remark
    virtual QCString trNote()
    {
      return "Zu beachten";
    }

    virtual QCString trPublicTypes()
    {
      return "�ffentliche Typen";
    }

    virtual QCString trPublicAttribs()
    {
      if (Config_getBool("OPTIMIZE_OUTPUT_FOR_C"))
      {
        return "Datenfelder";
      }
      else
      {
        return "�ffentliche Attribute";
      }
    }

    virtual QCString trStaticPublicAttribs()
    {
      return "Statische �ffentliche Attribute";
    }

    virtual QCString trProtectedTypes()
    {
      return "Gesch�tzte Typen";
    }

    virtual QCString trProtectedAttribs()
    {
      return "Gesch�tzte Attribute";
    }

    virtual QCString trStaticProtectedAttribs()
    {
      return "Statische gesch�tzte Attribute";
    }

    virtual QCString trPrivateTypes()
    {
      return "Private Typen";
    }

    virtual QCString trPrivateAttribs()
    {
      return "Private Attribute";
    }

    virtual QCString trStaticPrivateAttribs()
    {
      return "Statische private Attribute";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.3
//////////////////////////////////////////////////////////////////////////

    /* Used as a marker that is put before a \todo item */
    virtual QCString trTodo()
    {
      return "Noch zu erledigen";
    }

    /* Used as the header of the todo list */
    virtual QCString trTodoList()
    {
      return "Liste der zu erledigenden Dinge";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.4
//////////////////////////////////////////////////////////////////////////

    virtual QCString trReferencedBy()
    {
      return "Wird benutzt von";
    }

    virtual QCString trRemarks()
    {
      return "Bemerkungen";
    }

    virtual QCString trAttention()
    {
      return "Achtung";
    }

    virtual QCString trInclByDepGraph()
    {
      return "Dieser Graph zeigt, welche Datei direkt oder "
             "indirekt diese Datei enth�lt:";
    }

    virtual QCString trSince()
    {
      return "Seit";
    }
    
//////////////////////////////////////////////////////////////////////////
// new since 1.1.5
//////////////////////////////////////////////////////////////////////////

    /* title of the graph legend page */
    virtual QCString trLegendTitle()
    {
      return "Erkl�rung des Graphen";
    }

    /* page explaining how the dot graph's should be interpreted 
       The %A in the text below are to prevent link to classes called "A". */
    virtual QCString trLegendDocs()
    {
      return 
        "Diese Seite erkl�rt die Interpretation der von doxygen "
        "erzeugten Graphen.<p>\n"
        "Beispiel:\n"
        "\\code\n"
        "/*! Wegen Verk�rzung unsichtbare Klasse */\n"
        "class Invisible { };\n\n"
        "/*! Klasse verk�rzt dargestellt, Vererbungsbeziehung ist versteckt */\n"
        "class Truncated : public Invisible { };\n\n"
        "/* Nicht mit doxygen-Kommentaren dokumentierte Klasse */\n"
        "class Undocumented { };\n\n"
        "/*! Mithilfe �ffentlicher Vererbung vererbte Klasse */\n"
        "class PublicBase : public Truncated { };\n\n"
        "/*! Eine Template Klasse */\n"
        "template<class T> class Templ { };\n\n"
        "/*! Mithilfe gesch�tzter Vererbung vererbte Klasse */\n"
        "class ProtectedBase { };\n\n"
        "/*! Mithilfe privater Vererbung vererbte Klasse */\n"
        "class PrivateBase { };\n\n"
        "/*! Von der Klasse Inherited benutzte Klasse */\n"
        "class Used { };\n\n"
        "/*! Superklasse, die von mehreren anderen Klassen erbt */\n"
        "class Inherited : public PublicBase,\n"
        "                  protected ProtectedBase,\n"
        "                  private PrivateBase,\n"
        "                  public Undocumented\n"
        "                  public Templ<int>\n"
        "{\n"
        "  private:\n"
        "    Used *m_usedClass;\n"
        "};\n"
        "\\endcode\n\n"
        "Setzen des Tags \\c MAX_DOT_GRAPH_HEIGHT in der Konfigurationsdatei "
        "auf 240 liefert den folgenden Graphen:"
        "<p><center><img src=\"graph_legend."+Config_getEnum("DOT_IMAGE_FORMAT")+"\"></center>\n"
        "<p>\n"
        "Die Rechtecke in obigem Graphen bedeuten:\n"
        "<ul>\n"
        "<li>Ein schwarz gef�lltes Rechteck stellt die Struktur oder "
        "Klasse dar, f�r die der Graph erzeugt wurde.\n"
        "<li>Ein Rechteck mit schwarzem Rahmen kennzeichnet eine dokumentierte "
        "Struktur oder Klasse.\n"
        "<li>Ein Rechteck mit grauem Rahmen kennzeichnet eine undokumentierte "
        "Struktur oder Klasse.\n"
        "<li>Ein Rechteck mit rotem Rahmen kennzeichnet eine dokumentierte "
        "Struktur oder Klasse, f�r die nicht alle Vererbungs-/"
        "Enthaltenseinsbeziehungen dargestellt werden. Ein Graph wird gek�rzt, "
        "wenn er nicht in die angegebenen Schranken passt.\n"
        "</ul>\n"
        "Die Pfeile bedeuten:\n"
        "<ul>\n"
        "<li>Ein dunkelblauer Pfeil stellt eine �ffentliche Vererbungsbeziehung "
        "zwischen zwei Klassen dar.\n"
        "<li>Ein dunkelgr�ner Pfeil stellt gesch�tzte Vererbung dar.\n"
        "<li>Ein dunkelroter Pfeil stellt private Vererbung dar.\n"
        "<li>Ein gestrichelter violetter Pfeil bedeutet, dass eine Klasse in "
        "einer anderen enthalten ist oder von einer anderen benutzt wird. Am "
        "Pfeil stehen die Variable(n), mit deren Hilfe auf die Struktur oder "
        "Klasse an der Pfeilspitze zugegriffen werden kann.\n"
        "<li>Ein gestrichelter gelber Pfeil kennzeichnet eine Verkn�pfung "
        "zwischen einer Template Instanz und der Template Klasse von welcher "
        "es abstammt. Neben dem Pfeil sind die Template Parameter aufgef�hrt.\n"
        "</ul>\n";
    }

    /* text for the link to the legend page */
    virtual QCString trLegend()
    {
      return "Legende";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.0
//////////////////////////////////////////////////////////////////////////

    /* Used as a marker that is put before a test item */
    virtual QCString trTest()
    {
      return "Test";
    }

    /* Used as the header of the test list */
    virtual QCString trTestList()
    {
      return "Test-Liste";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.1
//////////////////////////////////////////////////////////////////////////

    /* Used as a section header for KDE-2 IDL methods */
    virtual QCString trDCOPMethods()
    {
      return "DCOP Methoden";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.2
//////////////////////////////////////////////////////////////////////////

    /* Used as a section header for IDL properties */
    virtual QCString trProperties()
    {
      return "Eigenschaften";
    }

    /* Used as a section header for IDL property documentation */
    virtual QCString trPropertyDocumentation()
    {
      return "Dokumentation der Eigenschaften";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.4
//////////////////////////////////////////////////////////////////////////

    /* Used for Java interfaces in the summary section of Java packages */
    virtual QCString trInterfaces()
    {
      return "Schnittstellen";
    }

    /* Used for Java classes in the summary section of Java packages */
    virtual QCString trClasses()
    {
      if (Config_getBool("OPTIMIZE_OUTPUT_FOR_C"))
        return "Datenstrukturen";
      else
        return "Klassen";
    }

    /* Used as the title of a Java package */
    virtual QCString trPackage(const char *name)
    {
      return (QCString)"Package "+name;
    }

    /* Title of the package index page */
    virtual QCString trPackageList()
    {
      return "Package Liste";
    }

    /* The description of the package index page */
    virtual QCString trPackageListDescription()
    {
      return "Hier folgen die packages mit einer Kurzbeschreibung (wenn verf�gbar):";
    }

    /* The link name in the Quick links header for each page */
    virtual QCString trPackages()
    {
      return "Packages";
    }

    /* Used as a chapter title for Latex & RTF output */
    virtual QCString trPackageDocumentation()
    {
      return "Package Dokumentation";
    }

    /* Text shown before a multi-line define */
    virtual QCString trDefineValue()
    {
      return "Wert:";
    }
    
//////////////////////////////////////////////////////////////////////////
// new since 1.2.5
//////////////////////////////////////////////////////////////////////////
    
    /* Used as a marker that is put before a \bug item */
    virtual QCString trBug()
    {
      return "Fehler";
    }

    /* Used as the header of the bug list */
    virtual QCString trBugList()
    {
      return "Liste der bekannten Fehler";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.6-20010422
//////////////////////////////////////////////////////////////////////////

    /* Used as ansicpg for RTF file. See translator_en.h for details. */
    virtual QCString trRTFansicp()
    {
      return "1252";
    }

    /*  Used as ansicpg for RTF fcharset 
     *  \see trRTFansicp() for a table of possible values.
     */
    virtual QCString trRTFCharSet()
    {
      return "0";
    }

    /* Used as header RTF general index */
    virtual QCString trRTFGeneralIndex()
    {
      return "Index";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.7
//////////////////////////////////////////////////////////////////////////

    /*  This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names 
     *  of the category.
     */
    virtual QCString trClass(bool, bool singular)
    {
      QCString result("Klasse");
      if (!singular)  result+="n";
      return result;
    }

    /*  This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names 
     *  of the category.
     */
    virtual QCString trFile(bool, bool singular)
    {
      QCString result("Datei");
      if (!singular)  result+="en";
      return result;
    }

    /*  This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names 
     *  of the category.
     */
    virtual QCString trNamespace(bool, bool singular)
    {
      QCString result("Namensbereich");
      if (!singular)  result+="e";
      return result;
    }

    /*  This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names 
     *  of the category.
     */
    virtual QCString trGroup(bool, bool singular)
    {
      QCString result("Gruppe");
      if (!singular)  result+="n";
      return result;
    }

    /*  This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names 
     *  of the category.
     */
    virtual QCString trPage(bool, bool singular)
    {
      QCString result("Seite");
      if (!singular)  result+="n";
      return result;
    }

    /*  This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names 
     *  of the category.
     */
    virtual QCString trMember(bool, bool singular)
    {
      QCString result("Element");
      if (!singular)  result+="e";
      return result;
    }

    /*  This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names 
     *  of the category.
     */
    virtual QCString trField(bool, bool singular)
    {
      QCString result("Feld");
      if (!singular)  result+="er";
      return result;
    }

    /*  This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names 
     *  of the category.
     */
    virtual QCString trGlobal(bool first_capital, bool singular)
    {
      QCString result((first_capital ? "Global" : "global")); // FIXME
      if (!singular)  result+="";
      return result;
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.7-20010524
//////////////////////////////////////////////////////////////////////////
  
    /*  This text is generated when the \author command is used and
     *  for the author section in man pages. 
     */
    virtual QCString trAuthor(bool, bool singular)
    {
      QCString result("Autor");
      if (!singular)  result+="en";
      return result;
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.11
//////////////////////////////////////////////////////////////////////////

    /* This text is put before the list of members referenced by a member
     */
    virtual QCString trReferences()
    {
      return "Benutzt";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.13
//////////////////////////////////////////////////////////////////////////
    /* used in member documentation blocks to produce a list of
     * members that are implemented by this one.
     */
    virtual QCString trImplementedFromList(int numEntries)
    {
      return "Implementiert " + trWriteList(numEntries) + ".";
    }

    /* used in member documentation blocks to produce a list of
     * all members that implement this abstract member.
     */
    virtual QCString trImplementedInList(int numEntries)
    {
      return "Implementiert in " + trWriteList(numEntries) + ".";
    }

};

#endif

