# Introducing latex

[https://www.overleaf.com/learn/latex/Learn_LaTeX_in_30_minutes](https://www.overleaf.com/learn/latex/Learn_LaTeX_in_30_minutes)
**This introductory tutorial does not assume any prior experience of LaTeX** but, hopefully, *by the time you are finished*, you will not only have written your first LaTeX document but also acquired sufficient knowledge and confidence to take the next steps toward LaTeX proficiency.

- Contents
    - 1 What is LaTeX?
        
        url
        
    - 2 Why learn LaTeX?
        
        url
        
    - 3 Writing your first piece of LaTeX
    - 4 The preamble of a document
    - 5 Including title, author and date information
    - 6 Adding comments
    - 7 Bold, italics and underlining
    - 8 Adding image
    - 9 Captions, labels and references
    - 10 Creating lists in LaTeX
    - 10.1 Unordered lists
    - 10.2 Ordered lists
    - 11 Adding math to LaTeX
    - 11.1 Inline math mode
    - 11.2 Display math mode
    - 11.3 More complete examples
    - 12 Basic document structure
    - 12.1 Abstracts
    - 12.2 Paragraphs and new lines
    - 12.3 Chapters and sections
    - 13 Creating tables
    - 13.1 Creating a basic table in LaTeX
    - 13.2 Adding borders
    - 13.3 Captions, labels and references
    - 14 Adding a Table of Contents
    - 15 Downloading your finished document
    - 16 Finding and using LaTeX packages
    - 16.1 Loading packages
    - 16.2 Finding information about packages: CTAN
    - 16.3 Packages available on Overleaf: Introducing TeX Live

What is LaTeX?
**LaTeX (pronounced “LAY-tek” or “LAH-tek”)** is a tool for typesetting professional-looking documents.

However, LaTeX’s mode of operation is quite different to many other document-production applications you may have used, such as Microsoft Word or LibreOffice Writer: those **“WYSIWYG”** tools provide users with an interactive page into which they type and edit their text and apply various forms of styling.

LaTeX works very differently: instead, your document is a plain text file interspersed with LaTeX commands used to express the desired (typeset) results. To produce a visible, typeset document, your **LaTeX file is processed by a piece of software called a TeX engine** which *uses the commands embedded in your text file to guide and control the typesetting process, converting the LaTeX commands and document text into a professionally typeset PDF file.*

<aside>
💡

This means you only need to focus on the content of your document and the computer, via LaTeX commands and the TeX engine, will take care of the visual appearance (formatting).

</aside>

Why learn LaTeX?
Various arguments can be proposed for, or against, learning to use LaTeX instead of other document-authoring applications; but, ultimately, it is a personal choice based on preferences, affinities, and documentation requirements.

Arguments in favour of LaTeX include:

support for typesetting extremely complex mathematics, tables and technical content for the physical sciences; facilities for footnotes, cross-referencing and management of bibliographies;
ease of producing complicated, or tedious, document elements such as indexes, glossaries, table of contents, lists of figures; being **highly customizable** for **bespoke document production** due to its intrinsic programmability and extensibility through thousands of free add-on packages.
Overall, LaTeX provides users with a **great deal of control over the production of documents** which are typeset to extremely high standards. Of course, there are types of documents or publications where LaTeX doesn’t shine, including many “free form” page designs typically found in magazine-type publications.

One important benefit of LaTeX is the separation of document content from document style: once you have written the content of your document, its appearance can be changed with ease. Similarly, you **can create a LaTeX file which defines the layout/style of a particular document type and that file can be used as a template to standardise authorship/production of additional documents of that type**; For example,

*This allows scientific publishers to create article templates, in LaTeX, which authors use to write papers for submission to journals.* **Overleaf** has a gallery containing thousands of templates, covering an enormous range of document types—everything from scientific articles, reports and books to CVs and presentations. Because these templates define the layout and style of the document, authors need only to open them in Overleaf—**creating a new project**—and commence writing to add their content.

Writing your first piece of LaTeX
The first step is to create a new LaTeX project. You can do this on your own computer by creating a new .tex file; alternatively, you can start a new project in Overleaf.

Let’s start with the simplest working example, which can be opened directly in Overleaf:

```latex
\documentclass{article}
\begin{document}
First document. This is a simple example, with no
extra parameters or packages included.
\end{document}
```

Output:(EXPLAINATION)

Example document
You can see that LaTeX has **automatically indented the first line of the paragraph**, taking care of that formatting for you. Let’s have a closer look at what each part of our code does.

The first line of code, **\documentclass{article}**, *declares the document type known as its class, which controls the overall appearance of the document*. Different types of documents require different classes; i.e., a CV/resume will require a different class than a scientific paper which might use the standard LaTeX article class. Other types of documents you may be working on may require different classes such as book or report. To get some idea of the many LaTeX class types available, visit the page :

[Tutorials#Tutorials_on_CTAN_(Comprehensive_TeX_Archive_Network)](https://www.overleaf.com/learn/latex/Tutorials#Tutorials_on_CTAN_(Comprehensive_TeX_Archive_Network))

Having *set the document class, our content, known as the* **body of the document***, is written between the \begin{document} and \end{document} tags*. 

Any Overleaf project can be configured to recompile automatically each time it is edited: click the small arrow next to the Recompile button and set Auto Compile to On, as shown in the following screengrab:

Screengrab showing how to set Auto Compile to On or Off

Having seen how to add content to our document, the next step is to give it a title. To do this, we must talk briefly about the preamble.

The preamble of a document
The screengrab above shows Overleaf storing a LaTeX document as a file called main.tex: the .tex file extension is, by convention, used when naming files containing your document’s LaTeX code.

The previous example showed how document content was entered after the \begin{document} command; however, everything in your .tex file appearing before that point is called the preamble, which acts as the document’s “setup” section. Within the preamble you define the document class (type) together with specifics such as languages to be used when writing the document; loading packages you would like to use (more on this later), and it is where you’d apply other types of configuration.

A minimal document preamble might look like this:

```latex
\documentclass[12pt, letterpaper]{article}
\usepackage{graphicx}
where \documentclass[12pt, letterpaper]{article}
```

defines the overall class (type) of document. Additional parameters, which must be separated by commas, are included in square brackets ([...]) and used to configure this instance of the article class; i.e., settings we wish to use for this particular article-class-based document.

In this example, the two parameters do the following:

12pt sets the font size, letterpaper sets the paper size Of course other font sizes, 9pt, 11pt, 12pt, can be used, but if none is specified, the default size is 10pt. As for the paper size, other possible values are a4 paper and legal paper. For further information see the article about page size and margins.

The preamble line **\usepackage{graphicx**}
is an example of loading an external package (here, graphicx) to extend LaTeX’s capabilities, enabling it to import external graphics files. LaTeX packages are discussed in the section Finding and using LaTeX packages.

Including title, author and date information
Adding a title, author and date to our document requires three more lines in the preamble (not the main body of the document). Those lines are:

**\title{My first LaTeX document}***: the document title*
**\author{Hubert Farnsworth}***: here you write the name of the author(s) and, optionally, the \thanks command within the curly braces:*
**\thanks{Funded by the Overleaf team.}:** *can be added after the name of the author, inside the braces of the author command. It will add a superscript and a footnote with the text inside the braces. Useful if you need to thank an institution in your article.*
**\date{August 2022}:** *you can enter the date manually or use the command \today to typeset the current date every time the document is compiled*
With these lines added, your preamble should look something like this:

\documentclass[12pt, letterpaper]{article}
\title{My first LaTeX document}
\author{Hubert Farnsworth\thanks{Funded by the Overleaf team.}}
\date{August 2022}
To typeset the title, author and date use the \maketitle command within the body of the document:

\begin{document}
\maketitle
We have now added a title, author and date to our first \LaTeX{} document!
\end{document}
The preamble and body can now be combined to produce a complete document which can be opened in Overleaf:

\documentclass[12pt, letterpaper]{article}
\title{My first LaTeX document}
\author{Hubert Farnsworth\thanks{Funded by the Overleaf team.}}
\date{August 2022}
\begin{document}
\maketitle
We have now added a title, author and date to our first \LaTeX{} document!
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image of a simple document produced in LaTeX
Adding comments
LaTeX is a form of “program code”, but one which specializes in document typesetting; consequently, as with code written in any other programming language, it can be very useful to include comments within your document. A LaTeX comment is a section of text that will not be typeset or affect the document in any way—often used to add “to do” notes; include explanatory notes; provide in-line explanations of tricky macros or comment-out lines/sections of LaTeX code when debugging.

To make a comment in LaTeX, simply write a % symbol at the beginning of the line, as shown in the following code which uses the example above:

\documentclass[12pt, letterpaper]{article}
\title{My first LaTeX document}
\author{Hubert Farnsworth\thanks{Funded by the Overleaf team.}}
\date{August 2022}
\begin{document}
\maketitle
We have now added a title, author and date to our first \LaTeX{} document!

% This line here is a comment. It will not be typeset in the document.
\end{document}
Open this example in Overleaf.

This example produces output that is identical to the previous LaTeX code which did not contain the comment.

Bold, italics and underlining
Next, we will now look at some text formatting commands:

**Bold**: bold text in LaTeX is typeset using the \textbf{...} command.
*Italics*: italicised text is produced using the \textit{...} command.
Underline: to underline text use the \underline{...} command.
The next example demonstrates these commands:

Some of the \textbf{greatest}
discoveries in \underline{science}
were made by \textbf{\textit{accident}}.
Open this example in Overleaf.

This example produces the following output:

Imate showing text formatted in a LaTeX document
Another very useful command is \emph{argument}, whose effect on its argument depends on the context. Inside normal text, the emphasized text is italicized, but this behaviour is reversed if used inside an italicized text—see the next example:

Some of the greatest \emph{discoveries} in science
were made by accident.

\textit{Some of the greatest \emph{discoveries}
in science were made by accident.}

\textbf{Some of the greatest \emph{discoveries}
in science were made by accident.}
Open this \emph example in Overleaf.

This example produces the following output:

Image demonstrating use of the LaTeX \emph command
Note: some packages, such as Beamer, change the behaviour of the \emph command.
Adding images
In this section we will look at how to add images to a LaTeX document. Overleaf supports three ways to insert images:

Use the Insert Figure button(The Insert Figure button on the editor toolbar), located on the editor toolbar, to insert an image into Visual Editor or Code Editor.
Copy and paste an image into Visual Editor or Code Editor.
Use Code Editor to write LaTeX code that inserts a graphic.
Options 1 and 2 automatically generate the LaTeX code required to insert images, but here we introduce option 3—note that you will need to upload those images to your Overleaf project. The following example demonstrates how to include a picture:

\documentclass{article}
\usepackage{graphicx} %LaTeX package to import graphics
\graphicspath{{images/}} %configuring the graphicx package

\begin{document}
The universe is immense and it seems to be homogeneous,
on a large scale, everywhere we look.

% The \includegraphcs command is
% provided (implemented) by the
% graphicx package
\includegraphics{universe}

There's a picture of a galaxy above.
\end{document}
Open this image example in Overleaf.

This example produces the following output:

Graphic showing an image imported into a LaTeX document
Importing graphics into a LaTeX document needs an add-on package which provides the commands and features required to include external graphics files. The above example loads the graphicx package which, among many other commands, provides \includegraphics{...} to import graphics and \graphicspath{...} to advise LaTeX where the graphics are located.

To use the graphicx package, include the following line in your Overleaf document preamble:

\usepackage{graphicx}
In our example the command \graphicspath{{images/}} informs LaTeX that images are kept in a folder named images, which is contained in the current directory:

Image showing LaTeX accessing images stored in a folder

The \includegraphics{universe} command does the actual work of inserting the image in the document. Here, universe is the name of the image file but without its extension.

Note:

Although the full file name, including its extension, is allowed in the \includegraphics command, it’s considered best practice to omit the file extension because it will prompt LaTeX to search for all the supported formats.
Generally, the graphic’s file name should not contain white spaces or multiple dots; it is also recommended to use lowercase letters for the file extension when uploading image files to Overleaf.
More information on LaTeX packages can be found at the end of this tutorial in the section Finding and using LaTeX packages.

Captions, labels and references
Images can be captioned, labelled and referenced by means of the figure environment, as shown below:

\documentclass{article}
\usepackage{graphicx}
\graphicspath{{images/}}

\begin{document}

\begin{figure}[h]
\centering
\includegraphics[width=0.75\textwidth]{mesh}
\caption{A nice plot.}
\label{fig:mesh1}
\end{figure}

As you can see in figure \ref{fig:mesh1}, the function grows near the origin. This example is on page \pageref{fig:mesh1}.

\end{document}
Open this image example in Overleaf.

This example produces the following output:

Graphic showing use of figure captions in LaTeX
There are several noteworthy commands in the example:

\includegraphics[width=0.75\textwidth]{mesh}: This form of \includegraphics instructs LaTeX to set the figure’s width to 75% of the text width—whose value is stored in the \textwidth command.
\caption{A nice plot.}: As its name suggests, this command sets the figure caption which can be placed above or below the figure. If you create a list of figures this caption will be used in that list.
\label{fig:mesh1}: To reference this image within your document you give it a label using the \label command. The label is used to generate a number for the image and, combined with the next command, will allow you to reference it.
\ref{fig:mesh1}: This code will be substituted by the number corresponding to the referenced figure.
Images incorporated in a LaTeX document should be placed inside a figure environment, or similar, so that LaTeX can automatically position the image at a suitable location in your document.

Further guidance is contained in the following Overleaf help articles:

Positioning of Figures
Inserting Images
Creating lists in LaTeX
You can create different types of list using environments, which are used to encapsulate the LaTeX code required to implement a specific typesetting feature. An environment starts with \begin{environment-name} and ends with \end{environment-name} where environment-name might be figure, tabular or one of the list types: itemize for unordered lists or enumerate for ordered lists.

Unordered lists
Unordered lists are produced by the itemize environment. Each list entry must be preceded by the \item command, as shown below:

\documentclass{article}
\begin{document}
\begin{itemize}
\item The individual entries are indicated with a black dot, a so-called bullet.
\item The text in the entries may be of any length.
\end{itemize}
\end{document}
Open this example in Overleaf.

This example produces the following output:

An example of bulleted lists in LaTeX
You can also open this  larger Overleaf project which demonstrates various types of LaTeX list.

Ordered lists
Ordered lists use the same syntax as unordered lists but are created using the enumerate environment:

\documentclass{article}
\begin{document}
\begin{enumerate}
\item This is the first entry in our list.
\item The list numbers increase with each entry we add.
\end{enumerate}
\end{document}
Open this example in Overleaf.

This example produces the following output:

An example numbered list produced in LaTeX
As with unordered lists, each entry must be preceded by the \item command which, here, automatically generates the numeric ordered-list label value, starting at 1.

For further information you can open this  larger Overleaf project which demonstrates various types of LaTeX list or visit our dedicated help article on LaTeX lists, which provides many more examples and shows how to create customized lists.

Adding math to LaTeX
One of the main advantages of LaTeX is the ease with which mathematical expressions can be written. LaTeX provides two writing modes for typesetting mathematics:

inline math mode used for writing formulas that are part of a paragraph
display math mode used to write expressions that are not part of a text or paragraph and are typeset on separate lines
Inline math mode
Let’s see an example of inline math mode:

\documentclass[12pt, letterpaper]{article}
\begin{document}
In physics, the mass-energy equivalence is stated
by the equation $E=mc^2$, discovered in 1905 by Albert Einstein.
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image showing math typeset in inline math mode
To typeset inline-mode math you can use one of these delimiter pairs: \( ... \), $ ... $ or \begin{math} ... \end{math}, as demonstrated in the following example:

\documentclass[12pt, letterpaper]{article}
\begin{document}
\begin{math}
E=mc^2
\end{math} is typeset in a paragraph using inline math mode---as is $E=mc^2$, and so too is \(E=mc^2\).
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image demonstrating content produced using LaTeX inline math mode
Display math mode
Equations typeset in display mode can be numbered or unnumbered, as in the following example:

\documentclass[12pt, letterpaper]{article}
\begin{document}
The mass-energy equivalence is described by the famous equation
\[ E=mc^2 \] discovered in 1905 by Albert Einstein.

In natural units ($c = 1$), the formula expresses the identity
\begin{equation}
E=m
\end{equation}
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image showing display mode math in LaTeX
To typeset display-mode math you can use one of these delimiter pairs: \[ ... \], \begin{displaymath} ... \end{displaymath} or \begin{equation} ... \end{equation}. Historically, typesetting display-mode math required use of $$ characters delimiters, as in $$ ... display math here ...$$, but this method is no longer recommended: use LaTeX’s delimiters \[ ... \] instead.

More complete examples
The following examples demonstrate a range of mathematical content typeset using LaTeX.

\documentclass{article}
\begin{document}
Subscripts in math mode are written as $a_b$ and superscripts are written as $a^b$. These can be combined and nested to write expressions such as

\[ T^{i_1 i_2 \dots i_p}*{j_1 j_2 \dots j_q} = T(x^{i_1},\dots,x^{i_p},e*{j_1},\dots,e_{j_q}) \]

We write integrals using $\int$ and fractions using $\frac{a}{b}$. Limits are placed on integrals using superscripts and subscripts:

\[ \int_0^1 \frac{dx}{e^x} =  \frac{e-1}{e} \]

Lower case Greek letters are written as $\omega$ $\delta$ etc. while upper case Greek letters are written as $\Omega$ $\Delta$.

Mathematical operators are prefixed with a backslash as $\sin(\beta)$, $\cos(\alpha)$, $\log(x)$ etc.
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image showing a range of math typeset in LaTeX
The next example uses the equation* environment which is provided by the amsmath package, so we need to add the following line to our document preamble:

\usepackage{amsmath}% For the equation* environment
For further information on using amsmath see our help article.

\documentclass{article}
\usepackage{amsmath}% For the equation* environment
\begin{document}
\section{First example}

The well-known Pythagorean theorem \(x^2 + y^2 = z^2\) was proved to be invalid for other exponents, meaning the next equation has no integer solutions for \(n>2\):

\[ x^n + y^n = z^n \]

\section{Second example}

This is a simple math expression \(\sqrt{x^2+1}\) inside text.
And this is also the same:
\begin{math}
\sqrt{x^2+1}
\end{math}
but by using another command.

This is a simple math expression without numbering
\[\sqrt{x^2+1}\]
separated from text.

This is also the same:
\begin{displaymath}
\sqrt{x^2+1}
\end{displaymath}

\ldots and this:
\begin{equation*}
\sqrt{x^2+1}
\end{equation*}
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image showing a range of math typeset in LaTeX
The possibilities with math in LaTeX are endless so be sure to visit our help pages for advice and examples on specific topics:

Mathematical expressions
Subscripts and superscripts
Brackets and Parentheses
Fractions and Binomials
Aligning Equations
Operators
Spacing in math mode
Integrals, sums and limits
Display style in math mode
List of Greek letters and math symbols
Mathematical fonts
Basic document structure
Next, we explore abstracts and how to partition a LaTeX document into different chapters, sections and paragraphs.

Abstracts
Scientific articles usually provide an abstract which is a brief overview/summary of their core topics, or arguments. The next example demonstrates typesetting an abstract using LaTeX’s abstract environment:

\documentclass{article}
\begin{document}
\begin{abstract}
This is a simple paragraph at the beginning of the
document. A brief introduction about the main subject.
\end{abstract}
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image showing an abstract typeset in LaTeX
Paragraphs and new lines
With the abstract in place, we can begin writing our first paragraph. The next example demonstrates:

how a new paragraph is created by pressing the "enter" key twice, ending the current line and inserting a subsequent blank line;
how to start a new line without starting a new paragraph by inserting a manual line break using the \\ command, which is a double backslash; alternatively, use the \newline command.
The third paragraph in this example demonstrates use of the commands \\ and \newline:

\documentclass{article}
\begin{document}

\begin{abstract}
This is a simple paragraph at the beginning of the
document. A brief introduction about the main subject.
\end{abstract}

After our abstract we can begin the first paragraph, then press ``enter'' twice to start the second one.

This line will start a second paragraph.

I will start the third paragraph and then add \\ a manual line break which causes this text to start on a new line but remains part of the same paragraph. Alternatively, I can use the \verb|\newline|\newline command to start a new line, which is also part of the same paragraph.
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image showing the creation of paragraphs in LaTeX
Note how LaTeX automatically indents paragraphs—except immediately after document headings such as section and subsection—as we will see.

New users are advised that multiple \\ or \newlines should not used to “simulate” paragraphs with larger spacing between them because this can interfere with LaTeX’s typesetting algorithms. The recommended method is to continue using blank lines for creating new paragraphs, without any \\, and load the parskip package by adding \usepackage{parskip} to the preamble.

Further information on paragraphs can be found in the following articles:

Paragraphs and new lines
How to change paragraph spacing in LaTeX
LaTeX Error: There's no line here to end provides additional advice and guidance on using \\.
Chapters and sections
Longer documents, irrespective of authoring software, are usually partitioned into parts, chapters, sections, subsections and so forth. LaTeX also provides document-structuring commands but the available commands, and their implementations (what they do), can depend on the document class being used. By way of example, documents created using the book class can be split into parts, chapters, sections, subsections and so forth but the letter class does not provide (support) any commands to do that.

This next example demonstrates commands used to structure a document based on the book class:

\documentclass{book}
\begin{document}

\chapter{First Chapter}

\section{Introduction}

This is the first section.

Lorem  ipsum  dolor  sit  amet,  consectetuer  adipiscing

elit. Etiam  lobortisfacilisis sem.  Nullam nec mi et
neque pharetra sollicitudin.  Praesent imperdietmi nec ante.
Donec ullamcorper, felis non sodales...

\section{Second Section}

Lorem ipsum dolor sit amet, consectetuer adipiscing elit.

Etiam lobortis facilisissem.  Nullam nec mi et neque pharetra
sollicitudin.  Praesent imperdiet mi necante...

\subsection{First Subsection}
Praesent imperdietmi nec ante. Donec ullamcorper, felis non sodales...

\section*{Unnumbered Section}
Lorem ipsum dolor sit amet, consectetuer adipiscing elit.

Etiam lobortis facilisissem...
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image showing sections in LaTeX book document
The names of sectioning commands are mostly self-explanatory; for example, \chapter{First Chapter} creates a new chapter titled First Chapter, \section{Introduction} produces a section titled Introduction, and so forth. Sections can be further divided into \subsection{...} and even \subsubsection{...}. The numbering of sections, subsections etc. is automatic but can be disabled by using the so-called starred version of the appropriate command which has an asterisk (*) at the end, such as \section*{...} and \subsection*{...}.

Collectively, LaTeX document classes provide the following sectioning commands, with specific classes each supporting a relevant subset:

\part{part}
\chapter{chapter}
\section{section}
\subsection{subsection}
\subsubsection{subsubsection}
\paragraph{paragraph}
\subparagraph{subparagraph}
In particular, the \part and \chapter commands are only available in the report and book document classes.

Visit the Overleaf article article about sections and chapters for further information about document-structure commands.

Creating tables
The following examples show how to create tables in LaTeX, including the addition of lines (rules) and captions.

Creating a basic table in LaTeX
We start with an example showing how to typeset a basic table:

\begin{center}
\begin{tabular}{c c c}
cell1 & cell2 & cell3 \\
cell4 & cell5 & cell6 \\

cell7 & cell8 & cell9

\end{tabular}
\end{center}
Open this example in Overleaf.

This example produces the following output:

Graphic displaying a table typeset in LaTeX
The tabular environment is the default LaTeX method to create tables. You must specify a parameter to this environment, in this case {c c c} which advises LaTeX that there will be three columns and the text inside each one must be centred. You can also use r to right-align the text and l to left-align it. The alignment symbol & is used to demarcate individual table cells within a table row. To end a table row use the new line command \\. Our table is contained within a center environment to make it centred within the text width of the page.

Adding borders
The tabular environment supports horizontal and vertical lines (rules) as part of the table:

to add horizontal rules, above and below rows, use the \hline command
to add vertical rules, between columns, use the vertical line parameter |
In this example the argument is {|c|c|c|} which declares three (centred) columns each separated by a vertical line (rule); in addition, we use \hline to place a horizontal rule above the first row and below the final row:

\begin{center}
\begin{tabular}{|c|c|c|}
\hline
cell1 & cell2 & cell3 \\
cell4 & cell5 & cell6 \\
cell7 & cell8 & cell9 \\
\hline
\end{tabular}
\end{center}
Open this example in Overleaf.

This example produces the following output:

Graphic displaying a table typeset in LaTeX containing horizontal and vertical rules
Here is a further example:

\begin{center}
\begin{tabular}{||c c c c||}
\hline
Col1 & Col2 & Col2 & Col3 \\ [0.5ex]
\hline\hline
1 & 6 & 87837 & 787 \\
\hline
2 & 7 & 78 & 5415 \\
\hline
3 & 545 & 778 & 7507 \\
\hline
4 & 545 & 18744 & 7560 \\
\hline
5 & 88 & 788 & 6344 \\ [1ex]
\hline
\end{tabular}
\end{center}
Open this example in Overleaf.

This example produces the following output:

Graphic displaying a table typeset in LaTeX containing horizontal and vertical rules
Tip!

Creating tables in LaTeX can be time-consuming so you may want to use the [TablesGenerator.com](http://tablesgenerator.com/) online tool to export LaTeX code for tabulars.
Captions, labels and references
You can caption and reference tables in much the same way as images. The only difference is that instead of the figure environment, you use the table environment.

Table \ref{table:data} shows how to add a table caption and reference a table.
\begin{table}[h!]
\centering
\begin{tabular}{||c c c c||}
\hline
Col1 & Col2 & Col2 & Col3 \\ [0.5ex]
\hline\hline
1 & 6 & 87837 & 787 \\
2 & 7 & 78 & 5415 \\
3 & 545 & 778 & 7507 \\
4 & 545 & 18744 & 7560 \\
5 & 88 & 788 & 6344 \\ [1ex]
\hline
\end{tabular}
\caption{Table to test captions and labels.}
\label{table:data}
\end{table}
Open this example in Overleaf.

This example produces the following output:

A LaTeX table with a caption
Adding a Table of Contents
Creating a table of contents is straightforward because the command \tableofcontents does almost all the work for you:

\documentclass{article}
\title{Sections and Chapters}
\author{Gubert Farnsworth}
\date{August 2022}
\begin{document}

\maketitle

\tableofcontents

\section{Introduction}

This is the first section.

Lorem  ipsum  dolor  sit  amet,  consectetuer  adipiscing

elit.   Etiam  lobortisfacilisis sem.  Nullam nec mi et
neque pharetra sollicitudin.  Praesent imperdietmi nec ante.
Donec ullamcorper, felis non sodales...

\section*{Unnumbered Section}
\addcontentsline{toc}{section}{Unnumbered Section}

Lorem ipsum dolor sit amet, consectetuer adipiscing elit.

Etiam lobortis facilisissem.  Nullam nec mi et neque pharetra
sollicitudin.  Praesent imperdiet mi necante...

\section{Second Section}

Lorem ipsum dolor sit amet, consectetuer adipiscing elit.

Etiam lobortis facilisissem.  Nullam nec mi et neque pharetra
sollicitudin.  Praesent imperdiet mi necante...
\end{document}
Open this example in Overleaf.

This example produces the following output:

Graphic showing a table of contents produced by LaTeX
Sections, subsections and chapters are automatically included in the table of contents. To manually add entries, such as an unnumbered section, use the command \addcontentsline as shown in the example.

Downloading your finished document
The following brief video clip shows how to download your project’s source code or the typeset PDF file:

More information can be found in the Overleaf help article Exporting your work from Overleaf.

Finding and using LaTeX packages
LaTeX not only delivers significant typesetting capabilities but also provides a framework for extensibility through the use of add-on packages. Rather than attempting to provide commands and features that “try to do everything”, LaTeX is designed to be extensible, allowing users to load external bodies of code (packages) that provide more specialist typesetting capabilities or extend LaTeX’s built-in features—such as typesetting tables. As observed in the section Adding images, the graphicx package extends LaTeX by providing commands to import graphics files and was loaded (in the preamble) by writing

\usepackage{graphicx}
Loading packages
As noted above, packages are loaded in the document preamble via the \usepackage command but because (many) LaTeX packages provide a set of options, which can be used to configure their behaviour, the \usepackage command often looks like this:

\usepackage[options]{somepackage}
The square brackets “[...]” inform LaTeX which set of options should be applied when it loads somepackage. Within the set of options requested by the user, individual options, or settings, are typically separated by a comma; for example, the geometry package provides many options to configure page layout in LaTeX, so a typical use of geometry might look like this:

\usepackage[total={6.5in,8.75in},
top=1.2in, left=0.9in, includefoot]{geometry}
The geometry package is one example of a package written and contributed by members of the global LaTeX community and made available, for free, to anyone who wants to use it.

If a LaTeX package does not provide any options, or the user wants to use the default values of a package’s options, it would be loaded like this:

\usepackage{somepackage}
When you write \usepackage[...]{somepackage} LaTeX looks for a corresponding file called somepackage.sty, which it needs to load and process—to make the package commands available and execute any other code provided by that package. If LaTeX cannot find somepackage.sty it will terminate with an error, as demonstrated in the following Overleaf example:

\documentclass[12pt, letterpaper]{article}
\usepackage{somepackage}% a NON-EXISTENT package
\begin{document}
This will fail!
\end{document}
Open this error-generating example on Overleaf

This example produces the following output:

Image showing error causes by a missing package

Finding information about packages: CTAN
Packages are distributed through the Comprehensive TeX Archive Network, usually referred to as CTAN, which, at the time of writing, hosts 6287 packages from 2881 contributors. CTAN describes itself as

... a set of Internet sites around the world that offer TEX-related material for download.
You can browse CTAN to look for useful packages; for example:

by topic
alphabetically (useful if you know the package name)
You can also use the search facility (at the top of the page).

Packages available on Overleaf: Introducing TeX Live
Once per year a (large) subset of packages hosted on CTAN, plus LaTeX-related fonts and other software, is collated and distributed as a system called TeX Live, which can be used to install your own (local) LaTeX setup. In fact, Overleaf’s servers also use TeX Live and are updated when a new version of TeX Live is released. Overleaf’s TeX Live updates are not immediate but take place a few months post-release, giving us time to perform compatibility tests of the new TeX Live version with the thousands of templates contained in our gallery. For example, here is our TeX Live 2022 upgrade announcement.

Although TeX Live contains a (large) subset of CTAN packages it is possible to find an interesting package, such as igo for typesetting Go diagrams, which is hosted on CTAN but not included in (distributed by) TeX Live and thus unavailable on Overleaf. Some packages hosted on CTAN are not part of TeX Live due to a variety of reasons: perhaps a package is obsolete, has licensing problems, is extremely new (recently uploaded) or has platform dependencies, such as working on Windows but not Linux.

New packages, and updates to existing ones, are uploaded to CTAN all year round but updates to TeX Live are distributed annually; consequently, packages contained in the current version of TeX Live will not be as up-to-date as those hosted on CTAN. Because Overleaf’s servers use TeX Live it is possible that packages installed on our servers—i.e., ones available to our users—might not be the very latest versions available on CTAN but, generally, this is unlikely to be problematic.

[https://www.overleaf.com/learn/latex/Learn_LaTeX_in_30_minutes](https://www.overleaf.com/learn/latex/Learn_LaTeX_in_30_minutes)

Learn LaTeX in 30 minutes
This introductory tutorial does not assume any prior experience of LaTeX but, hopefully, by the time you are finished, you will not only have written your first LaTeX document but also acquired sufficient knowledge and confidence to take the next steps toward LaTeX proficiency.

Contents
1 What is LaTeX?
2 Why learn LaTeX?
3 Writing your first piece of LaTeX
4 The preamble of a document
5 Including title, author and date information
6 Adding comments
7 Bold, italics and underlining
8 Adding images
9 Captions, labels and references
10 Creating lists in LaTeX
10.1 Unordered lists
10.2 Ordered lists
11 Adding math to LaTeX
11.1 Inline math mode
11.2 Display math mode
11.3 More complete examples
12 Basic document structure
12.1 Abstracts
12.2 Paragraphs and new lines
12.3 Chapters and sections
13 Creating tables
13.1 Creating a basic table in LaTeX
13.2 Adding borders
13.3 Captions, labels and references
14 Adding a Table of Contents
15 Downloading your finished document
16 Finding and using LaTeX packages
16.1 Loading packages
16.2 Finding information about packages: CTAN
16.3 Packages available on Overleaf: Introducing TeX Live
What is LaTeX?
LaTeX (pronounced “LAY-tek” or “LAH-tek”) is a tool for typesetting professional-looking documents. However, LaTeX’s mode of operation is quite different to many other document-production applications you may have used, such as Microsoft Word or LibreOffice Writer: those “WYSIWYG” tools provide users with an interactive page into which they type and edit their text and apply various forms of styling. LaTeX works very differently: instead, your document is a plain text file interspersed with LaTeX commands used to express the desired (typeset) results. To produce a visible, typeset document, your LaTeX file is processed by a piece of software called a TeX engine which uses the commands embedded in your text file to guide and control the typesetting process, converting the LaTeX commands and document text into a professionally typeset PDF file. This means you only need to focus on the content of your document and the computer, via LaTeX commands and the TeX engine, will take care of the visual appearance (formatting).

Why learn LaTeX?
Various arguments can be proposed for, or against, learning to use LaTeX instead of other document-authoring applications; but, ultimately, it is a personal choice based on preferences, affinities, and documentation requirements.

Arguments in favour of LaTeX include:

support for typesetting extremely complex mathematics, tables and technical content for the physical sciences;
facilities for footnotes, cross-referencing and management of bibliographies;
ease of producing complicated, or tedious, document elements such as indexes, glossaries, table of contents, lists of figures;
being highly customizable for bespoke document production due to its intrinsic programmability and extensibility through thousands of free add-on packages.
Overall, LaTeX provides users with a great deal of control over the production of documents which are typeset to extremely high standards. Of course, there are types of documents or publications where LaTeX doesn’t shine, including many “free form” page designs typically found in magazine-type publications.

One important benefit of LaTeX is the separation of document content from document style: once you have written the content of your document, its appearance can be changed with ease. Similarly, you can create a LaTeX file which defines the layout/style of a particular document type and that file can be used as a template to standardise authorship/production of additional documents of that type; for example, this allows scientific publishers to create article templates, in LaTeX, which authors use to write papers for submission to journals. Overleaf has a gallery containing thousands of templates, covering an enormous range of document types—everything from scientific articles, reports and books to CVs and presentations. Because these templates define the layout and style of the document, authors need only to open them in Overleaf—creating a new project—and commence writing to add their content.

Writing your first piece of LaTeX
The first step is to create a new LaTeX project. You can do this on your own computer by creating a new .tex file; alternatively, you can start a new project in Overleaf.

Let’s start with the simplest working example, which can be opened directly in Overleaf:

\documentclass{article}
\begin{document}
First document. This is a simple example, with no
extra parameters or packages included.
\end{document}
Open this example in Overleaf.

This example produces the following output:

Example document
You can see that LaTeX has automatically indented the first line of the paragraph, taking care of that formatting for you. Let’s have a closer look at what each part of our code does.

The first line of code, \documentclass{article}, declares the document type known as its class, which controls the overall appearance of the document. Different types of documents require different classes; i.e., a CV/resume will require a different class than a scientific paper which might use the standard LaTeX article class. Other types of documents you may be working on may require different classes such as book or report. To get some idea of the many LaTeX class types available, visit the relevant page on CTAN (Comprehensive TeX Archive Network).

Having set the document class, our content, known as the body of the document, is written between the \begin{document} and \end{document} tags. After opening the example above, you can make changes to the text and, when finished, view the resulting typeset PDF by recompiling the document. To do this in Overleaf, simply hit Recompile, as demonstrated in this brief video clip:

Any Overleaf project can be configured to recompile automatically each time it is edited: click the small arrow next to the Recompile button and set Auto Compile to On, as shown in the following screengrab:

Screengrab showing how to set Auto Compile to On or Off

Having seen how to add content to our document, the next step is to give it a title. To do this, we must talk briefly about the preamble.

The preamble of a document
The screengrab above shows Overleaf storing a LaTeX document as a file called main.tex: the .tex file extension is, by convention, used when naming files containing your document’s LaTeX code.

The previous example showed how document content was entered after the \begin{document} command; however, everything in your .tex file appearing before that point is called the preamble, which acts as the document’s “setup” section. Within the preamble you define the document class (type) together with specifics such as languages to be used when writing the document; loading packages you would like to use (more on this later), and it is where you’d apply other types of configuration.

A minimal document preamble might look like this:

\documentclass[12pt, letterpaper]{article}
\usepackage{graphicx}
where \documentclass[12pt, letterpaper]{article} defines the overall class (type) of document. Additional parameters, which must be separated by commas, are included in square brackets ([...]) and used to configure this instance of the article class; i.e., settings we wish to use for this particular article-class-based document.

In this example, the two parameters do the following:

12pt sets the font size
letterpaper sets the paper size
Of course other font sizes, 9pt, 11pt, 12pt, can be used, but if none is specified, the default size is 10pt. As for the paper size, other possible values are a4paper and legalpaper. For further information see the article about page size and margins.

The preamble line

\usepackage{graphicx}
is an example of loading an external package (here, graphicx) to extend LaTeX’s capabilities, enabling it to import external graphics files. LaTeX packages are discussed in the section Finding and using LaTeX packages.

Including title, author and date information
Adding a title, author and date to our document requires three more lines in the preamble (not the main body of the document). Those lines are:

\title{My first LaTeX document}: the document title
\author{Hubert Farnsworth}: here you write the name of the author(s) and, optionally, the \thanks command within the curly braces:
\thanks{Funded by the Overleaf team.}: can be added after the name of the author, inside the braces of the author command. It will add a superscript and a footnote with the text inside the braces. Useful if you need to thank an institution in your article.
\date{August 2022}: you can enter the date manually or use the command \today to typeset the current date every time the document is compiled
With these lines added, your preamble should look something like this:

\documentclass[12pt, letterpaper]{article}
\title{My first LaTeX document}
\author{Hubert Farnsworth\thanks{Funded by the Overleaf team.}}
\date{August 2022}
To typeset the title, author and date use the \maketitle command within the body of the document:

\begin{document}
\maketitle
We have now added a title, author and date to our first \LaTeX{} document!
\end{document}
The preamble and body can now be combined to produce a complete document which can be opened in Overleaf:

\documentclass[12pt, letterpaper]{article}
\title{My first LaTeX document}
\author{Hubert Farnsworth\thanks{Funded by the Overleaf team.}}
\date{August 2022}
\begin{document}
\maketitle
We have now added a title, author and date to our first \LaTeX{} document!
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image of a simple document produced in LaTeX
Adding comments
LaTeX is a form of “program code”, but one which specializes in document typesetting; consequently, as with code written in any other programming language, it can be very useful to include comments within your document. A LaTeX comment is a section of text that will not be typeset or affect the document in any way—often used to add “to do” notes; include explanatory notes; provide in-line explanations of tricky macros or comment-out lines/sections of LaTeX code when debugging.

To make a comment in LaTeX, simply write a % symbol at the beginning of the line, as shown in the following code which uses the example above:

\documentclass[12pt, letterpaper]{article}
\title{My first LaTeX document}
\author{Hubert Farnsworth\thanks{Funded by the Overleaf team.}}
\date{August 2022}
\begin{document}
\maketitle
We have now added a title, author and date to our first \LaTeX{} document!

% This line here is a comment. It will not be typeset in the document.
\end{document}
Open this example in Overleaf.

This example produces output that is identical to the previous LaTeX code which did not contain the comment.

Bold, italics and underlining
Next, we will now look at some text formatting commands:

Bold: bold text in LaTeX is typeset using the \textbf{...} command.
Italics: italicised text is produced using the \textit{...} command.
Underline: to underline text use the \underline{...} command.
The next example demonstrates these commands:

Some of the \textbf{greatest}
discoveries in \underline{science}
were made by \textbf{\textit{accident}}.
Open this example in Overleaf.

This example produces the following output:

Imate showing text formatted in a LaTeX document
Another very useful command is \emph{argument}, whose effect on its argument depends on the context. Inside normal text, the emphasized text is italicized, but this behaviour is reversed if used inside an italicized text—see the next example:

Some of the greatest \emph{discoveries} in science
were made by accident.

\textit{Some of the greatest \emph{discoveries}
in science were made by accident.}

\textbf{Some of the greatest \emph{discoveries}
in science were made by accident.}
Open this \emph example in Overleaf.

This example produces the following output:

Image demonstrating use of the LaTeX \emph command
Note: some packages, such as Beamer, change the behaviour of the \emph command.
Adding images
In this section we will look at how to add images to a LaTeX document. Overleaf supports three ways to insert images:

Use the Insert Figure button(The Insert Figure button on the editor toolbar), located on the editor toolbar, to insert an image into Visual Editor or Code Editor.
Copy and paste an image into Visual Editor or Code Editor.
Use Code Editor to write LaTeX code that inserts a graphic.
Options 1 and 2 automatically generate the LaTeX code required to insert images, but here we introduce option 3—note that you will need to upload those images to your Overleaf project. The following example demonstrates how to include a picture:

\documentclass{article}
\usepackage{graphicx} %LaTeX package to import graphics
\graphicspath{{images/}} %configuring the graphicx package

\begin{document}
The universe is immense and it seems to be homogeneous,
on a large scale, everywhere we look.

% The \includegraphcs command is
% provided (implemented) by the
% graphicx package
\includegraphics{universe}

There's a picture of a galaxy above.
\end{document}
Open this image example in Overleaf.

This example produces the following output:

Graphic showing an image imported into a LaTeX document
Importing graphics into a LaTeX document needs an add-on package which provides the commands and features required to include external graphics files. The above example loads the graphicx package which, among many other commands, provides \includegraphics{...} to import graphics and \graphicspath{...} to advise LaTeX where the graphics are located.

To use the graphicx package, include the following line in your Overleaf document preamble:

\usepackage{graphicx}
In our example the command \graphicspath{{images/}} informs LaTeX that images are kept in a folder named images, which is contained in the current directory:

Image showing LaTeX accessing images stored in a folder

The \includegraphics{universe} command does the actual work of inserting the image in the document. Here, universe is the name of the image file but without its extension.

Note:

Although the full file name, including its extension, is allowed in the \includegraphics command, it’s considered best practice to omit the file extension because it will prompt LaTeX to search for all the supported formats.
Generally, the graphic’s file name should not contain white spaces or multiple dots; it is also recommended to use lowercase letters for the file extension when uploading image files to Overleaf.
More information on LaTeX packages can be found at the end of this tutorial in the section Finding and using LaTeX packages.

Captions, labels and references
Images can be captioned, labelled and referenced by means of the figure environment, as shown below:

\documentclass{article}
\usepackage{graphicx}
\graphicspath{{images/}}

\begin{document}

\begin{figure}[h]
\centering
\includegraphics[width=0.75\textwidth]{mesh}
\caption{A nice plot.}
\label{fig:mesh1}
\end{figure}

As you can see in figure \ref{fig:mesh1}, the function grows near the origin. This example is on page \pageref{fig:mesh1}.

\end{document}
Open this image example in Overleaf.

This example produces the following output:

Graphic showing use of figure captions in LaTeX
There are several noteworthy commands in the example:

\includegraphics[width=0.75\textwidth]{mesh}: This form of \includegraphics instructs LaTeX to set the figure’s width to 75% of the text width—whose value is stored in the \textwidth command.
\caption{A nice plot.}: As its name suggests, this command sets the figure caption which can be placed above or below the figure. If you create a list of figures this caption will be used in that list.
\label{fig:mesh1}: To reference this image within your document you give it a label using the \label command. The label is used to generate a number for the image and, combined with the next command, will allow you to reference it.
\ref{fig:mesh1}: This code will be substituted by the number corresponding to the referenced figure.
Images incorporated in a LaTeX document should be placed inside a figure environment, or similar, so that LaTeX can automatically position the image at a suitable location in your document.

Further guidance is contained in the following Overleaf help articles:

Positioning of Figures
Inserting Images
Creating lists in LaTeX
You can create different types of list using environments, which are used to encapsulate the LaTeX code required to implement a specific typesetting feature. An environment starts with \begin{environment-name} and ends with \end{environment-name} where environment-name might be figure, tabular or one of the list types: itemize for unordered lists or enumerate for ordered lists.

Unordered lists
Unordered lists are produced by the itemize environment. Each list entry must be preceded by the \item command, as shown below:

\documentclass{article}
\begin{document}
\begin{itemize}
\item The individual entries are indicated with a black dot, a so-called bullet.
\item The text in the entries may be of any length.
\end{itemize}
\end{document}
Open this example in Overleaf.

This example produces the following output:

An example of bulleted lists in LaTeX
You can also open this  larger Overleaf project which demonstrates various types of LaTeX list.

Ordered lists
Ordered lists use the same syntax as unordered lists but are created using the enumerate environment:

\documentclass{article}
\begin{document}
\begin{enumerate}
\item This is the first entry in our list.
\item The list numbers increase with each entry we add.
\end{enumerate}
\end{document}
Open this example in Overleaf.

This example produces the following output:

An example numbered list produced in LaTeX
As with unordered lists, each entry must be preceded by the \item command which, here, automatically generates the numeric ordered-list label value, starting at 1.

For further information you can open this  larger Overleaf project which demonstrates various types of LaTeX list or visit our dedicated help article on LaTeX lists, which provides many more examples and shows how to create customized lists.

Adding math to LaTeX
One of the main advantages of LaTeX is the ease with which mathematical expressions can be written. LaTeX provides two writing modes for typesetting mathematics:

inline math mode used for writing formulas that are part of a paragraph
display math mode used to write expressions that are not part of a text or paragraph and are typeset on separate lines
Inline math mode
Let’s see an example of inline math mode:

\documentclass[12pt, letterpaper]{article}
\begin{document}
In physics, the mass-energy equivalence is stated
by the equation $E=mc^2$, discovered in 1905 by Albert Einstein.
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image showing math typeset in inline math mode
To typeset inline-mode math you can use one of these delimiter pairs: \( ... \), $ ... $ or \begin{math} ... \end{math}, as demonstrated in the following example:

\documentclass[12pt, letterpaper]{article}
\begin{document}
\begin{math}
E=mc^2
\end{math} is typeset in a paragraph using inline math mode---as is $E=mc^2$, and so too is \(E=mc^2\).
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image demonstrating content produced using LaTeX inline math mode
Display math mode
Equations typeset in display mode can be numbered or unnumbered, as in the following example:

\documentclass[12pt, letterpaper]{article}
\begin{document}
The mass-energy equivalence is described by the famous equation
\[ E=mc^2 \] discovered in 1905 by Albert Einstein.

In natural units ($c = 1$), the formula expresses the identity
\begin{equation}
E=m
\end{equation}
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image showing display mode math in LaTeX
To typeset display-mode math you can use one of these delimiter pairs: \[ ... \], \begin{displaymath} ... \end{displaymath} or \begin{equation} ... \end{equation}. Historically, typesetting display-mode math required use of $$ characters delimiters, as in $$ ... display math here ...$$, but this method is no longer recommended: use LaTeX’s delimiters \[ ... \] instead.

More complete examples
The following examples demonstrate a range of mathematical content typeset using LaTeX.

\documentclass{article}
\begin{document}
Subscripts in math mode are written as $a_b$ and superscripts are written as $a^b$. These can be combined and nested to write expressions such as

\[ T^{i_1 i_2 \dots i_p}*{j_1 j_2 \dots j_q} = T(x^{i_1},\dots,x^{i_p},e*{j_1},\dots,e_{j_q}) \]

We write integrals using $\int$ and fractions using $\frac{a}{b}$. Limits are placed on integrals using superscripts and subscripts:

\[ \int_0^1 \frac{dx}{e^x} =  \frac{e-1}{e} \]

Lower case Greek letters are written as $\omega$ $\delta$ etc. while upper case Greek letters are written as $\Omega$ $\Delta$.

Mathematical operators are prefixed with a backslash as $\sin(\beta)$, $\cos(\alpha)$, $\log(x)$ etc.
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image showing a range of math typeset in LaTeX
The next example uses the equation* environment which is provided by the amsmath package, so we need to add the following line to our document preamble:

\usepackage{amsmath}% For the equation* environment
For further information on using amsmath see our help article.

\documentclass{article}
\usepackage{amsmath}% For the equation* environment
\begin{document}
\section{First example}

The well-known Pythagorean theorem \(x^2 + y^2 = z^2\) was proved to be invalid for other exponents, meaning the next equation has no integer solutions for \(n>2\):

\[ x^n + y^n = z^n \]

\section{Second example}

This is a simple math expression \(\sqrt{x^2+1}\) inside text.
And this is also the same:
\begin{math}
\sqrt{x^2+1}
\end{math}
but by using another command.

This is a simple math expression without numbering
\[\sqrt{x^2+1}\]
separated from text.

This is also the same:
\begin{displaymath}
\sqrt{x^2+1}
\end{displaymath}

\ldots and this:
\begin{equation*}
\sqrt{x^2+1}
\end{equation*}
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image showing a range of math typeset in LaTeX
The possibilities with math in LaTeX are endless so be sure to visit our help pages for advice and examples on specific topics:

Mathematical expressions
Subscripts and superscripts
Brackets and Parentheses
Fractions and Binomials
Aligning Equations
Operators
Spacing in math mode
Integrals, sums and limits
Display style in math mode
List of Greek letters and math symbols
Mathematical fonts
Basic document structure
Next, we explore abstracts and how to partition a LaTeX document into different chapters, sections and paragraphs.

Abstracts
Scientific articles usually provide an abstract which is a brief overview/summary of their core topics, or arguments. The next example demonstrates typesetting an abstract using LaTeX’s abstract environment:

\documentclass{article}
\begin{document}
\begin{abstract}
This is a simple paragraph at the beginning of the
document. A brief introduction about the main subject.
\end{abstract}
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image showing an abstract typeset in LaTeX
Paragraphs and new lines
With the abstract in place, we can begin writing our first paragraph. The next example demonstrates:

how a new paragraph is created by pressing the "enter" key twice, ending the current line and inserting a subsequent blank line;
how to start a new line without starting a new paragraph by inserting a manual line break using the \\ command, which is a double backslash; alternatively, use the \newline command.
The third paragraph in this example demonstrates use of the commands \\ and \newline:

\documentclass{article}
\begin{document}

\begin{abstract}
This is a simple paragraph at the beginning of the
document. A brief introduction about the main subject.
\end{abstract}

After our abstract we can begin the first paragraph, then press ``enter'' twice to start the second one.

This line will start a second paragraph.

I will start the third paragraph and then add \\ a manual line break which causes this text to start on a new line but remains part of the same paragraph. Alternatively, I can use the \verb|\newline|\newline command to start a new line, which is also part of the same paragraph.
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image showing the creation of paragraphs in LaTeX
Note how LaTeX automatically indents paragraphs—except immediately after document headings such as section and subsection—as we will see.

New users are advised that multiple \\ or \newlines should not used to “simulate” paragraphs with larger spacing between them because this can interfere with LaTeX’s typesetting algorithms. The recommended method is to continue using blank lines for creating new paragraphs, without any \\, and load the parskip package by adding \usepackage{parskip} to the preamble.

Further information on paragraphs can be found in the following articles:

Paragraphs and new lines
How to change paragraph spacing in LaTeX
LaTeX Error: There's no line here to end provides additional advice and guidance on using \\.
Chapters and sections
Longer documents, irrespective of authoring software, are usually partitioned into parts, chapters, sections, subsections and so forth. LaTeX also provides document-structuring commands but the available commands, and their implementations (what they do), can depend on the document class being used. By way of example, documents created using the book class can be split into parts, chapters, sections, subsections and so forth but the letter class does not provide (support) any commands to do that.

This next example demonstrates commands used to structure a document based on the book class:

\documentclass{book}
\begin{document}

\chapter{First Chapter}

\section{Introduction}

This is the first section.

Lorem  ipsum  dolor  sit  amet,  consectetuer  adipiscing

elit. Etiam  lobortisfacilisis sem.  Nullam nec mi et
neque pharetra sollicitudin.  Praesent imperdietmi nec ante.
Donec ullamcorper, felis non sodales...

\section{Second Section}

Lorem ipsum dolor sit amet, consectetuer adipiscing elit.

Etiam lobortis facilisissem.  Nullam nec mi et neque pharetra
sollicitudin.  Praesent imperdiet mi necante...

\subsection{First Subsection}
Praesent imperdietmi nec ante. Donec ullamcorper, felis non sodales...

\section*{Unnumbered Section}
Lorem ipsum dolor sit amet, consectetuer adipiscing elit.

Etiam lobortis facilisissem...
\end{document}
Open this example in Overleaf.

This example produces the following output:

Image showing sections in LaTeX book document
The names of sectioning commands are mostly self-explanatory; for example, \chapter{First Chapter} creates a new chapter titled First Chapter, \section{Introduction} produces a section titled Introduction, and so forth. Sections can be further divided into \subsection{...} and even \subsubsection{...}. The numbering of sections, subsections etc. is automatic but can be disabled by using the so-called starred version of the appropriate command which has an asterisk (*) at the end, such as \section*{...} and \subsection*{...}.

Collectively, LaTeX document classes provide the following sectioning commands, with specific classes each supporting a relevant subset:

\part{part}
\chapter{chapter}
\section{section}
\subsection{subsection}
\subsubsection{subsubsection}
\paragraph{paragraph}
\subparagraph{subparagraph}
In particular, the \part and \chapter commands are only available in the report and book document classes.

Visit the Overleaf article article about sections and chapters for further information about document-structure commands.

Creating tables
The following examples show how to create tables in LaTeX, including the addition of lines (rules) and captions.

Creating a basic table in LaTeX
We start with an example showing how to typeset a basic table:

\begin{center}
\begin{tabular}{c c c}
cell1 & cell2 & cell3 \\
cell4 & cell5 & cell6 \\

cell7 & cell8 & cell9

\end{tabular}
\end{center}
Open this example in Overleaf.

This example produces the following output:

Graphic displaying a table typeset in LaTeX
The tabular environment is the default LaTeX method to create tables. You must specify a parameter to this environment, in this case {c c c} which advises LaTeX that there will be three columns and the text inside each one must be centred. You can also use r to right-align the text and l to left-align it. The alignment symbol & is used to demarcate individual table cells within a table row. To end a table row use the new line command \\. Our table is contained within a center environment to make it centred within the text width of the page.

Adding borders
The tabular environment supports horizontal and vertical lines (rules) as part of the table:

to add horizontal rules, above and below rows, use the \hline command
to add vertical rules, between columns, use the vertical line parameter |
In this example the argument is {|c|c|c|} which declares three (centred) columns each separated by a vertical line (rule); in addition, we use \hline to place a horizontal rule above the first row and below the final row:

\begin{center}
\begin{tabular}{|c|c|c|}
\hline
cell1 & cell2 & cell3 \\
cell4 & cell5 & cell6 \\
cell7 & cell8 & cell9 \\
\hline
\end{tabular}
\end{center}
Open this example in Overleaf.

This example produces the following output:

Graphic displaying a table typeset in LaTeX containing horizontal and vertical rules
Here is a further example:

\begin{center}
\begin{tabular}{||c c c c||}
\hline
Col1 & Col2 & Col2 & Col3 \\ [0.5ex]
\hline\hline
1 & 6 & 87837 & 787 \\
\hline
2 & 7 & 78 & 5415 \\
\hline
3 & 545 & 778 & 7507 \\
\hline
4 & 545 & 18744 & 7560 \\
\hline
5 & 88 & 788 & 6344 \\ [1ex]
\hline
\end{tabular}
\end{center}
Open this example in Overleaf.

This example produces the following output:

Graphic displaying a table typeset in LaTeX containing horizontal and vertical rules
Tip!

Creating tables in LaTeX can be time-consuming so you may want to use the [TablesGenerator.com](http://tablesgenerator.com/) online tool to export LaTeX code for tabulars.
Captions, labels and references
You can caption and reference tables in much the same way as images. The only difference is that instead of the figure environment, you use the table environment.

Table \ref{table:data} shows how to add a table caption and reference a table.
\begin{table}[h!]
\centering
\begin{tabular}{||c c c c||}
\hline
Col1 & Col2 & Col2 & Col3 \\ [0.5ex]
\hline\hline
1 & 6 & 87837 & 787 \\
2 & 7 & 78 & 5415 \\
3 & 545 & 778 & 7507 \\
4 & 545 & 18744 & 7560 \\
5 & 88 & 788 & 6344 \\ [1ex]
\hline
\end{tabular}
\caption{Table to test captions and labels.}
\label{table:data}
\end{table}
Open this example in Overleaf.

This example produces the following output:

A LaTeX table with a caption
Adding a Table of Contents
Creating a table of contents is straightforward because the command \tableofcontents does almost all the work for you:

\documentclass{article}
\title{Sections and Chapters}
\author{Gubert Farnsworth}
\date{August 2022}
\begin{document}

\maketitle

\tableofcontents

\section{Introduction}

This is the first section.

Lorem  ipsum  dolor  sit  amet,  consectetuer  adipiscing

elit.   Etiam  lobortisfacilisis sem.  Nullam nec mi et
neque pharetra sollicitudin.  Praesent imperdietmi nec ante.
Donec ullamcorper, felis non sodales...

\section*{Unnumbered Section}
\addcontentsline{toc}{section}{Unnumbered Section}

Lorem ipsum dolor sit amet, consectetuer adipiscing elit.

Etiam lobortis facilisissem.  Nullam nec mi et neque pharetra
sollicitudin.  Praesent imperdiet mi necante...

\section{Second Section}

Lorem ipsum dolor sit amet, consectetuer adipiscing elit.

Etiam lobortis facilisissem.  Nullam nec mi et neque pharetra
sollicitudin.  Praesent imperdiet mi necante...
\end{document}
Open this example in Overleaf.

This example produces the following output:

Graphic showing a table of contents produced by LaTeX
Sections, subsections and chapters are automatically included in the table of contents. To manually add entries, such as an unnumbered section, use the command \addcontentsline as shown in the example.

Downloading your finished document
The following brief video clip shows how to download your project’s source code or the typeset PDF file:

More information can be found in the Overleaf help article Exporting your work from Overleaf.

Finding and using LaTeX packages
LaTeX not only delivers significant typesetting capabilities but also provides a framework for extensibility through the use of add-on packages. Rather than attempting to provide commands and features that “try to do everything”, LaTeX is designed to be extensible, allowing users to load external bodies of code (packages) that provide more specialist typesetting capabilities or extend LaTeX’s built-in features—such as typesetting tables. As observed in the section Adding images, the graphicx package extends LaTeX by providing commands to import graphics files and was loaded (in the preamble) by writing

\usepackage{graphicx}
Loading packages
As noted above, packages are loaded in the document preamble via the \usepackage command but because (many) LaTeX packages provide a set of options, which can be used to configure their behaviour, the \usepackage command often looks like this:

\usepackage[options]{somepackage}
The square brackets “[...]” inform LaTeX which set of options should be applied when it loads somepackage. Within the set of options requested by the user, individual options, or settings, are typically separated by a comma; for example, the geometry package provides many options to configure page layout in LaTeX, so a typical use of geometry might look like this:

\usepackage[total={6.5in,8.75in},
top=1.2in, left=0.9in, includefoot]{geometry}
The geometry package is one example of a package written and contributed by members of the global LaTeX community and made available, for free, to anyone who wants to use it.

If a LaTeX package does not provide any options, or the user wants to use the default values of a package’s options, it would be loaded like this:

\usepackage{somepackage}
When you write \usepackage[...]{somepackage} LaTeX looks for a corresponding file called somepackage.sty, which it needs to load and process—to make the package commands available and execute any other code provided by that package. If LaTeX cannot find somepackage.sty it will terminate with an error, as demonstrated in the following Overleaf example:

\documentclass[12pt, letterpaper]{article}
\usepackage{somepackage}% a NON-EXISTENT package
\begin{document}
This will fail!
\end{document}
Open this error-generating example on Overleaf

This example produces the following output:

Image showing error causes by a missing package

Finding information about packages: CTAN
Packages are distributed through the Comprehensive TeX Archive Network, usually referred to as CTAN, which, at the time of writing, hosts 6287 packages from 2881 contributors. CTAN describes itself as

... a set of Internet sites around the world that offer TEX-related material for download.
You can browse CTAN to look for useful packages; for example:

by topic
alphabetically (useful if you know the package name)
You can also use the search facility (at the top of the page).

Packages available on Overleaf: Introducing TeX Live
Once per year a (large) subset of packages hosted on CTAN, plus LaTeX-related fonts and other software, is collated and distributed as a system called TeX Live, which can be used to install your own (local) LaTeX setup. In fact, Overleaf’s servers also use TeX Live and are updated when a new version of TeX Live is released. Overleaf’s TeX Live updates are not immediate but take place a few months post-release, giving us time to perform compatibility tests of the new TeX Live version with the thousands of templates contained in our gallery. For example, here is our TeX Live 2022 upgrade announcement.

Although TeX Live contains a (large) subset of CTAN packages it is possible to find an interesting package, such as igo for typesetting Go diagrams, which is hosted on CTAN but not included in (distributed by) TeX Live and thus unavailable on Overleaf. Some packages hosted on CTAN are not part of TeX Live due to a variety of reasons: perhaps a package is obsolete, has licensing problems, is extremely new (recently uploaded) or has platform dependencies, such as working on Windows but not Linux.

New packages, and updates to existing ones, are uploaded to CTAN all year round but updates to TeX Live are distributed annually; consequently, packages contained in the current version of TeX Live will not be as up-to-date as those hosted on CTAN. Because Overleaf’s servers use TeX Live it is possible that packages installed on our servers—i.e., ones available to our users—might not be the very latest versions available on CTAN but, generally, this is unlikely to be problematic.