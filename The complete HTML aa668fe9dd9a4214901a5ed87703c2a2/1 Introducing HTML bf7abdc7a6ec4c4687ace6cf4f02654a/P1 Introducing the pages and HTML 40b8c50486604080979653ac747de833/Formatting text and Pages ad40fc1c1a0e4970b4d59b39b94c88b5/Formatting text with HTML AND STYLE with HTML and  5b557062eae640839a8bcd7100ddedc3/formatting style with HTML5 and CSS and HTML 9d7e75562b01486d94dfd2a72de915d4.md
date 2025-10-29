# formatting style with HTML5 and CSS and HTML

Formatting styles with HTML and HTML5 involves using HTML tags and CSS to control the appearance of your content. While HTML provides the structure and semantic meaning, CSS is used to handle the presentation and layout. Here’s a detailed guide on how to format text and style your pages using HTML and CSS.

### 1. **HTML Basics for Formatting**

### **Text Formatting Tags**

- **Bold Text**: Use `<strong>` for important text or `<b>` for visual bolding.
    
    ```html
    <strong>This text is bold and important.</strong>
    <b>This text is just bold.</b>
    
    ```
    
- **Italic Text**: Use `<em>` for emphasized text or `<i>` for visual italicizing.
    
    ```html
    <em>This text is italicized and emphasized.</em>
    <i>This text is just italicized.</i>
    
    ```
    
- **Underline Text**: Use `<u>` for underlined text.
    
    ```html
    <u>This text is underlined.</u>
    
    ```
    
- **Strikethrough Text**: Use `<s>` or `<del>` for text that has been struck through.
    
    ```html
    <s>This text has a strikethrough.</s>
    <del>This text is marked as deleted.</del>
    
    ```
    

### **Headings and Paragraphs**

- **Headings**: `<h1>` to `<h6>` are used to define headings of different levels.
    
    ```html
    <h1>Main Heading</h1>
    <h2>Subheading</h2>
    <h3>Sub-subheading</h3>
    
    ```
    
- **Paragraphs**: Use `<p>` to define paragraphs.
    
    ```html
    <p>This is a paragraph of text.</p>
    
    ```
    

### **Lists**

- **Unordered Lists**: Use `<ul>` and `<li>` for bulleted lists.
    
    ```html
    <ul>
        <li>Item 1</li>
        <li>Item 2</li>
    </ul>
    
    ```
    
- **Ordered Lists**: Use `<ol>` and `<li>` for numbered lists.
    
    ```html
    <ol>
        <li>First item</li>
        <li>Second item</li>
    </ol>
    
    ```
    

### **Quotations**

- **Blockquote**: Use `<blockquote>` for longer quotations.
    
    ```html
    <blockquote>
        <p>This is a blockquote. It is used for longer quotations from other sources.</p>
    </blockquote>
    
    ```
    
- **Inline Quotation**: Use `<q>` for shorter, inline quotations.
    
    ```html
    <p>This is an example of <q>inline quotation</q> in a sentence.</p>
    
    ```
    

### **Code and Preformatted Text**

- **Code**: Use `<code>` for inline code snippets.
    
    ```html
    <p>Here is an example of <code>inline code</code>.</p>
    
    ```
    
- **Preformatted Text**: Use `<pre>` to maintain formatting.
    
    ```html
    <pre>
    This text is preformatted.
    It preserves whitespace and line breaks.
    </pre>
    
    ```
    

### 2. **CSS for Styling**

CSS (Cascading Style Sheets) is used to apply styles to your HTML elements. Here’s how to use CSS for formatting:

### **Inline CSS**

Apply styles directly within HTML tags using the `style` attribute.

```html
<p style="color: blue; font-size: 20px;">This text is blue and 20px in size.</p>

```

### **Internal CSS**

Define styles within the `<style>` tag in the `<head>` section of your HTML document.

```html
<head>
    <style>
        body {
            font-family: Arial, sans-serif;
        }
        h1 {
            color: darkblue;
        }
        p {
            line-height: 1.5;
            margin-bottom: 20px;
        }
        .highlight {
            background-color: yellow;
        }
    </style>
</head>

```

### **External CSS**

Link to an external CSS file for styling across multiple pages.

```html
<head>
    <link rel="stylesheet" href="styles.css">
</head>

```

**`styles.css`**

```css
body {
    font-family: Arial, sans-serif;
}
h1 {
    color: darkblue;
}
p {
    line-height: 1.5;
    margin-bottom: 20px;
}
.highlight {
    background-color: yellow;
}

```

### **CSS Selectors and Properties**

- **Selectors**: Target elements by tag, class, or ID.
    
    ```css
    p { /* Target all <p> elements */ }
    .class-name { /* Target elements with class="class-name" */ }
    #id-name { /* Target element with id="id-name" */ }
    
    ```
    
- **Properties**: Define styles such as `color`, `font-size`, `margin`, `padding`, `text-align`, etc.
    
    ```css
    p {
        color: red;
        font-size: 18px;
        text-align: center;
    }
    
    ```
    

### 3. **HTML5 Elements and Their Styling**

HTML5 introduced new semantic elements that improve the structure and accessibility of web pages.

- **`<header>`**: Defines the header section of a page or section.
    
    ```html
    <header>
        <h1>Welcome to My Website</h1>
    </header>
    
    ```
    
- **`<footer>`**: Defines the footer section of a page or section.
    
    ```html
    <footer>
        <p>© 2024 My Website</p>
    </footer>
    
    ```
    
- **`<article>`**: Represents a self-contained piece of content.
    
    ```html
    <article>
        <h2>Article Title</h2>
        <p>This is the content of the article.</p>
    </article>
    
    ```
    
- **`<section>`**: Represents a section of content.
    
    ```html
    <section>
        <h2>Section Title</h2>
        <p>Content for this section.</p>
    </section>
    
    ```
    
- **`<aside>`**: Represents content aside from the main content (e.g., sidebars).
    
    ```html
    <aside>
        <h2>Related Links</h2>
        <ul>
            <li><a href="#">Link 1</a></li>
            <li><a href="#">Link 2</a></li>
        </ul>
    </aside>
    
    ```
    
- **`<nav>`**: Represents navigation links.
    
    ```html
    <nav>
        <ul>
            <li><a href="#home">Home</a></li>
            <li><a href="#about">About</a></li>
        </ul>
    </nav>
    
    ```
    

### 4. **Responsive Design**

Use media queries to make your design responsive to different screen sizes.

```css
/* Base styles */
body {
    font-family: Arial, sans-serif;
}

/* Media query for tablets and larger screens */
@media (min-width: 768px) {
    .container {
        display: flex;
        justify-content: space-between;
    }
}

/* Media query for mobile screens */
@media (max-width: 767px) {
    .container {
        display: block;
    }
}

```

### Summary

- **HTML**: Provides the structure and semantic meaning of content.
- **CSS**: Controls the visual presentation and layout.
- **HTML5**: Introduces new semantic elements that improve page structure and accessibility.
- **Responsive Design**: Use media queries to ensure your site works well on various devices.

By combining these elements, you can create a well-structured, visually appealing, and accessible web page.