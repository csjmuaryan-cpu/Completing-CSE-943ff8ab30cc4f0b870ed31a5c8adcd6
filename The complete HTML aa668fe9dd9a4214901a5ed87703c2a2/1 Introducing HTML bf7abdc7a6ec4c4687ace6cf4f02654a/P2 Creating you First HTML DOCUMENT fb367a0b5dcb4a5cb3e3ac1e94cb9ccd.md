# P2.Creating you First HTML DOCUMENT.

[html_editors.asp](https://www.w3schools.com/html/html_editors.asp)

[html_basic.asp](https://www.w3schools.com/html/html_basic.asp)

Creating, saving, and viewing HTML documents is fundamental to web development. Here’s a step-by-step guide on how to manage HTML files, apply structural and common tags, and use formatting techniques to enhance your web pages.

### 1. **Creating and Saving HTML Documents**

### **Creating an HTML Document**

1. **Choose a Text Editor**: You can use any text editor to create HTML files, such as Notepad, Sublime Text, Visual Studio Code, or Atom.
2. **Write HTML Code**: Start by writing your HTML code in the editor. Here’s a basic structure:
    
    ```html
    <!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>My First HTML Page</title>
    </head>
    <body>
        <h1>Hello, World!</h1>
        <p>This is my first HTML document.</p>
    </body>
    </html>
    
    ```
    
3. **Save the Document**: Save your file with a `.html` extension. For example, `index.html`.
    - **In Notepad**: Go to `File` > `Save As...`, choose `All Files` from the dropdown, and save as `index.html`.
    - **In Visual Studio Code**: Simply click `File` > `Save As`, and type `index.html`.

### **Viewing an HTML Document**

1. **Open in a Browser**: Locate the saved `.html` file in your file explorer, right-click on it, and select `Open with` followed by your preferred web browser (e.g., Chrome, Firefox).
2. **Drag and Drop**: Alternatively, you can drag the file directly into an open browser window.

### 2. **Applying Structure Tags**

HTML documents are structured with various tags to create a logical flow and improve readability.

### **Basic Structure Tags**

- **`<html>`**: Root element that encloses all HTML content.
- **`<head>`**: Contains meta-information about the document, such as `<title>`, links to CSS files, and meta tags.
- **`<body>`**: Contains the content of the document, including text, images, links, etc.

**Example:**

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Structured HTML Document</title>
</head>
<body>
    <header>
        <h1>Welcome to My Website</h1>
    </header>
    <nav>
        <ul>
            <li><a href="#home">Home</a></li>
            <li><a href="#about">About</a></li>
            <li><a href="#contact">Contact</a></li>
        </ul>
    </nav>
    <main>
        <section>
            <h2>About Us</h2>
            <p>This is the about section.</p>
        </section>
        <section>
            <h2>Contact Us</h2>
            <p>This is the contact section.</p>
        </section>
    </main>
    <footer>
        <p>&copy; 2024 My Website</p>
    </footer>
</body>
</html>

```

### 3. **Applying Common Tags and Attributes**

Common tags and attributes are used to structure and style content within HTML documents.

### **Common Tags**

- **`<h1>`, `<h2>`, `<h3>`, etc.**: Headings of different levels.
- **`<p>`**: Paragraphs.
- **`<a>`**: Links.
- **`<img>`**: Images.
- **`<ul>`, `<ol>`, `<li>`**: Lists.
- **`<table>`, `<tr>`, `<td>`, `<th>`**: Tables.

**Example:**

```html
<h1>Main Heading</h1>
<p>This is a paragraph with <a href="<https://www.example.com>">a link</a> and an image:</p>
<img src="image.jpg" alt="Description of image" width="300">

```

### **Common Attributes**

- **`href`**: Specifies the URL for `<a>` tags.
- **`src`**: Specifies the path for `<img>` tags.
- **`alt`**: Provides alternative text for `<img>` tags.
- **`id`**: Defines a unique identifier for an element.
- **`class`**: Assigns one or more class names to an element for styling.

**Example:**

```html
<a href="<https://www.example.com>" target="_blank" title="Go to Example.com">Visit Example.com</a>
<img src="logo.png" alt="Company Logo" id="logo" class="responsive">

```

### 4. **Including Fancier Formatting**

For advanced formatting, you’ll use CSS (Cascading Style Sheets) to style your HTML content.

### **Inline CSS**

Apply styles directly within an HTML tag using the `style` attribute.

```html
<p style="color: blue; font-size: 18px;">This is a blue, 18px text.</p>

```

### **Internal CSS**

Define styles within the `<style>` tag in the `<head>` section.

```html
<head>
    <style>
        body {
            font-family: Arial, sans-serif;
        }
        h1 {
            color: darkblue;
        }
        .highlight {
            background-color: yellow;
            font-weight: bold;
        }
    </style>
</head>
<body>
    <h1 class="highlight">Highlighted Heading</h1>
</body>

```

### **External CSS**

Create a separate `.css` file and link it in the `<head>` section of your HTML.

**`styles.css`**

```css
body {
    font-family: 'Verdana', sans-serif;
}
h1 {
    color: green;
}
.highlight {
    background-color: lightblue;
    border: 2px solid navy;
}

```

**HTML**

```html
<head>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <h1 class="highlight">Styled Heading</h1>
</body>

```

### Summary

- **Creating and Saving HTML Documents**: Write code in a text editor and save with a `.html` extension.
- **Viewing HTML Documents**: Open the file in a web browser.
- **Applying Structure Tags**: Use tags like `<html>`, `<head>`, `<body>`, `<header>`, `<nav>`, `<main>`, `<section>`, and `<footer>`.
- **Applying Common Tags and Attributes**: Use tags for content and attributes to modify behavior and styling.
- **Including Fancier Formatting**: Use inline, internal, and external CSS for advanced styling.

These techniques will help you build well-structured, visually appealing web pages that can be easily viewed and managed.