# Adding some structure to a page

Adding structure to an HTML page involves using various HTML elements to organize content in a meaningful way. Here’s a basic rundown of how to structure an HTML page:

### 1. **Basic HTML Document Structure**

Every HTML document starts with a `<!DOCTYPE html>` declaration and has a basic structure consisting of `<html>`, `<head>`, and `<body>` tags:

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document Title</title>
    <link rel="stylesheet" href="styles.css"> <!-- Link to external CSS file -->
    <script src="script.js" defer></script> <!-- Link to external JavaScript file -->
</head>
<body>
    <!-- Page content goes here -->
</body>
</html>

```

### 2. **Headings and Text**

Use headings (`<h1>`, `<h2>`, etc.) to define the hierarchy of your content. Paragraphs are marked with `<p>`, and text can be emphasized with `<strong>`, `<em>`, and other inline elements.

```html
<body>
    <header>
        <h1>Main Heading</h1>
    </header>
    <section>
        <h2>Subheading 1</h2>
        <p>This is a paragraph of text under Subheading 1.</p>
        <p><strong>Important:</strong> This is emphasized text.</p>
    </section>
    <section>
        <h2>Subheading 2</h2>
        <p>Another paragraph of text under Subheading 2.</p>
    </section>
</body>

```

### 3. **Navigation**

Use the `<nav>` element for navigation links.

```html
<body>
    <header>
        <nav>
            <ul>
                <li><a href="#home">Home</a></li>
                <li><a href="#about">About</a></li>
                <li><a href="#contact">Contact</a></li>
            </ul>
        </nav>
    </header>
</body>

```

### 4. **Sections and Articles**

Use `<section>`, `<article>`, and `<aside>` elements to group related content.

```html
<body>
    <header>
        <h1>Main Heading</h1>
    </header>
    <section>
        <h2>Introduction</h2>
        <p>Some introductory content.</p>
    </section>
    <section>
        <h2>Details</h2>
        <article>
            <h3>Article Title</h3>
            <p>Content of the article.</p>
        </article>
        <aside>
            <h4>Related Information</h4>
            <p>Additional information.</p>
        </aside>
    </section>
    <footer>
        <p>Footer content here.</p>
    </footer>
</body>

```

### 5. **Forms and Inputs**

Forms are used to collect user input. Use the `<form>` element and various input types.

```html
<body>
    <form action="/submit" method="post">
        <label for="name">Name:</label>
        <input type="text" id="name" name="name">

        <label for="email">Email:</label>
        <input type="email" id="email" name="email">

        <button type="submit">Submit</button>
    </form>
</body>

```

### 6. **Lists**

Use `<ul>` for unordered lists and `<ol>` for ordered lists. List items go inside `<li>` tags.

```html
<body>
    <ul>
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
    </ul>

    <ol>
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
    </ol>
</body>

```

### 7. **Images and Media**

Use `<img>` for images and `<video>` for video content.

```html
<body>
    <img src="image.jpg" alt="Description of image">

    <video controls>
        <source src="video.mp4" type="video/mp4">
        Your browser does not support the video tag.
    </video>
</body>

```

### 8. **Semantic Elements**

Use semantic HTML elements to convey meaning and improve accessibility, such as `<header>`, `<footer>`, `<main>`, `<section>`, `<article>`, and `<aside>`.

```html
<body>
    <header>
        <h1>Site Title</h1>
    </header>
    <main>
        <section>
            <h2>About Us</h2>
            <p>Information about us.</p>
        </section>
    </main>
    <footer>
        <p>&copy; 2024 Your Company</p>
    </footer>
</body>

```

By using these elements, you can create a well-structured and semantically meaningful HTML document, which helps with both accessibility and SEO.