# Formatting text with HTML AND STYLE with HTML and CSS ,HTML5

Formatting text with HTML involves using a variety of tags to apply different styles and semantics to your content. Here’s a comprehensive guide to text formatting with HTML:

### 1. **Basic Text Formatting**

- **Bold Text**: Use the `<strong>` or `<b>` tag to make text bold.
    
    ```html
    <strong>This text is bold and has strong emphasis.</strong>
    <b>This text is just bold.</b>
    
    ```
    
- **Italic Text**: Use the `<em>` or `<i>` tag to italicize text.
    
    ```html
    <em>This text is italicized and has emphasis.</em>
    <i>This text is just italicized.</i>
    
    ```
    
- **Underline Text**: Use the `<u>` tag to underline text.
    
    ```html
    <u>This text is underlined.</u>
    
    ```
    
- **Strikethrough Text**: Use the `<s>` or `<del>` tag to strike through text.
    
    ```html
    <s>This text is struck through.</s>
    <del>This text is also struck through, indicating deletion.</del>
    
    ```
    

### 2. **Text Semantics**

- **Headings**: Use `<h1>` to `<h6>` to define headings with varying importance.
    
    ```html
    <h1>Main Heading</h1>
    <h2>Subheading</h2>
    <h3>Sub-subheading</h3>
    
    ```
    
- **Paragraphs**: Use the `<p>` tag to define paragraphs.
    
    ```html
    <p>This is a paragraph of text. Paragraphs are block-level elements.</p>
    
    ```
    
- **Line Breaks**: Use the `<br>` tag to insert a line break.
    
    ```html
    <p>This is a line of text.<br>And this text appears on the next line.</p>
    
    ```
    

### 3. **Text Alignment and Styling**

- **Align Text**: Use the `text-align` property in CSS for alignment.
    
    ```html
    <p style="text-align: left;">This text is aligned to the left.</p>
    <p style="text-align: center;">This text is centered.</p>
    <p style="text-align: right;">This text is aligned to the right.</p>
    
    ```
    
- **Font Size and Color**: Use CSS properties to change font size and color.
    
    ```html
    <p style="font-size: 20px; color: blue;">This text is 20px in size and blue in color.</p>
    
    ```
    

### 4. **Text Decoration**

- **Text Decoration**: Apply text decoration like underline, overline, and line-through with CSS.
    
    ```html
    <p style="text-decoration: underline;">This text is underlined.</p>
    <p style="text-decoration: line-through;">This text has a line through it.</p>
    <p style="text-decoration: overline;">This text has a line over it.</p>
    
    ```
    

### 5. **Lists**

- **Unordered Lists**: Use `<ul>` and `<li>` for unordered lists.
    
    ```html
    <ul>
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
    </ul>
    
    ```
    
- **Ordered Lists**: Use `<ol>` and `<li>` for ordered lists.
    
    ```html
    <ol>
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
    </ol>
    
    ```
    

### 6. **Quotations**

- **Blockquote**: Use `<blockquote>` for longer quotations.
    
    ```html
    <blockquote>
        <p>This is a blockquote. It is used to indicate that the text is a quotation from another source.</p>
    </blockquote>
    
    ```
    
- **Cite**: Use `<cite>` to reference the source of a quote or work.
    
    ```html
    <p>According to <cite>Shakespeare's Hamlet</cite>, "To be or not to be."</p>
    
    ```
    
- **Inline Quotation**: Use `<q>` for short inline quotations.
    
    ```html
    <p>This is an <q>inline quotation</q> example.</p>
    
    ```
    

### 7. **Code and Preformatted Text**

- **Code**: Use `<code>` for inline code snippets.
    
    ```html
    <p>Here is some <code>inline code</code> in a paragraph.</p>
    
    ```
    
- **Preformatted Text**: Use `<pre>` for preformatted text that maintains whitespace and line breaks.
    
    ```html
    <pre>
    This is preformatted text.
        It preserves spaces and line breaks.
    </pre>
    
    ```
    

### 8. **Formatting with CSS**

- **Applying CSS Styles**: Use the `style` attribute for inline styles, `<style>` tags for internal styles, or external stylesheets for consistent styling across pages.
    
    **Inline CSS Example:**
    
    ```html
    <p style="font-size: 18px; color: red;">This text has inline CSS styles.</p>
    
    ```
    
    **Internal CSS Example:**
    
    ```html
    <head>
        <style>
            p {
                font-size: 18px;
                color: green;
            }
            .highlight {
                background-color: yellow;
            }
        </style>
    </head>
    <body>
        <p>This paragraph is styled with internal CSS.</p>
        <p class="highlight">This paragraph has a highlighted background.</p>
    </body>
    
    ```
    
    **External CSS Example:**
    
    ```html
    <link rel="stylesheet" href="styles.css">
    
    ```
    
    **`styles.css`**
    
    ```css
    p {
        font-size: 18px;
        color: blue;
    }
    
    ```
    

By using these HTML tags and CSS styles, you can format and style your text to create well-structured, readable, and visually appealing web content.

[formatting style with HTML5 and CSS and HTML](Formatting%20text%20with%20HTML%20AND%20STYLE%20with%20HTML%20and%20%205b557062eae640839a8bcd7100ddedc3/formatting%20style%20with%20HTML5%20and%20CSS%20and%20HTML%209d7e75562b01486d94dfd2a72de915d4.md)