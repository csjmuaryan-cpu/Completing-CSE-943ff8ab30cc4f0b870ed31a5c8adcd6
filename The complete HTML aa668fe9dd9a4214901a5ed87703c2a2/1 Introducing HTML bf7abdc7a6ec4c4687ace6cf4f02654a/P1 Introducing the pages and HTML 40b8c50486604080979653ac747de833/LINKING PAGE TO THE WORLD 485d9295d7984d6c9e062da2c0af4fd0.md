# LINKING PAGE TO THE WORLD

Linking your HTML page to the world involves creating hyperlinks to other pages, websites, or resources. Here’s a detailed guide on how to create text and image hyperlinks, specify link targets, and create clickable imagemaps.

### 1. **Creating a Text Hyperlink**

To create a text hyperlink, use the `<a>` (anchor) tag with the `href` attribute specifying the URL.

```html
<a href="<https://www.example.com>">Visit Example.com</a>

```

- **`href`**: The URL or path to which the link points.

### 2. **Creating an Image Hyperlink**

To make an image a clickable link, wrap the `<img>` tag inside an `<a>` tag.

```html
<a href="<https://www.example.com>">
    <img src="image.jpg" alt="Description of the image">
</a>

```

- **`src`**: The path to the image file.
- **`alt`**: Alternative text for the image (important for accessibility).

### 3. **Specifying Other Link Targets**

You can specify where the linked page will open using the `target` attribute in the `<a>` tag.

- **`_blank`**: Opens the link in a new tab or window.
- **`_self`**: Opens the link in the same frame (default behavior).
- **`_parent`**: Opens the link in the parent frame (useful for frames).
- **`_top`**: Opens the link in the full body of the window.

```html
<a href="<https://www.example.com>" target="_blank">Open Example.com in a new tab</a>

```

### 4. **Creating a Clickable Imagemap**

An imagemap allows you to define clickable areas within an image. This is done using the `<map>` and `<area>` elements.

### **Steps to Create an Imagemap**

1. **Define the Image**: Use the `<img>` tag and set the `usemap` attribute to link it to a `<map>`.
2. **Create the Map**: Define the clickable areas within the `<map>` element using `<area>` tags.

**Example**

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Clickable Imagemap</title>
</head>
<body>

<img src="map-image.jpg" alt="Map Image" usemap="#imagemap">

<map name="imagemap">
    <area shape="rect" coords="34,44,270,350" href="<https://www.example.com>" alt="Example Site">
    <area shape="circle" coords="130,136,60" href="<https://www.example.org>" alt="Example Org">
    <area shape="poly" coords="245,70,350,70,300,150,200,150" href="<https://www.example.net>" alt="Example Net">
</map>

</body>
</html>

```

- **`<img>`**: Displays the image. The `usemap` attribute connects it to a `<map>` element.
- **`<map>`**: Defines the map with a `name` attribute that corresponds to the `usemap` value.
- **`<area>`**: Defines a clickable area within the image.
    - **`shape`**: Specifies the shape of the clickable area (`rect`, `circle`, or `poly`).
    - **`coords`**: Specifies the coordinates for the shape.
        - **`rect`**: `coords="x1,y1,x2,y2"` (top-left and bottom-right corners).
        - **`circle`**: `coords="x,y,r"` (center and radius).
        - **`poly`**: `coords="x1,y1,x2,y2,...,xn,yn"` (a series of coordinates).
    - **`href`**: The URL to link to.
    - **`alt`**: Alternative text for the area (important for accessibility).

### Summary

- **Text Links**: Use `<a>` with `href` to link text.
- **Image Links**: Wrap `<img>` with `<a>` to create clickable images.
- **Link Targets**: Use `target` to specify where the link opens.
- **Imagemaps**: Use `<map>` and `<area>` to define clickable regions within an image.

By using these methods, you can create a variety of interactive and navigable elements on your web pages.

## INCLUDING IMAGE IN A PAGE AND OTHER THINGS:

Here’s a detailed guide on how to include images in a page, create lists, arrange items within tables, design forms to get feedback, and split images into frames.

### 1. **Including a Picture in a Page**

To include an image in an HTML page, use the `<img>` tag.

```html
<img src="path/to/image.jpg" alt="Description of the image" width="300" height="200">

```

- **`src`**: The path to the image file.
- **`alt`**: Alternative text that describes the image (important for accessibility).
- **`width`** and **`height`**: Optional attributes to set the size of the image.

### 2. **Creating Lists**

### **Unordered Lists**

Use the `<ul>` (unordered list) tag and `<li>` (list item) tag for bullet points.

```html
<ul>
    <li>Item 1</li>
    <li>Item 2</li>
    <li>Item 3</li>
</ul>

```

### **Ordered Lists**

Use the `<ol>` (ordered list) tag and `<li>` (list item) tag for numbered items.

```html
<ol>
    <li>First item</li>
    <li>Second item</li>
    <li>Third item</li>
</ol>

```

### 3. **Arranging Items Within Tables**

To create tables, use the `<table>`, `<tr>` (table row), `<td>` (table data cell), and `<th>` (table header cell) tags.

```html
<table border="1">
    <thead>
        <tr>
            <th>Header 1</th>
            <th>Header 2</th>
            <th>Header 3</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>Row 1, Cell 1</td>
            <td>Row 1, Cell 2</td>
            <td>Row 1, Cell 3</td>
        </tr>
        <tr>
            <td>Row 2, Cell 1</td>
            <td>Row 2, Cell 2</td>
            <td>Row 2, Cell 3</td>
        </tr>
    </tbody>
</table>

```

- **`border`**: Attribute to define the table border. For better styling, use CSS.

**CSS Example for Styling Tables:**

```css
table {
    width: 100%;
    border-collapse: collapse;
}
th, td {
    border: 1px solid #ddd;
    padding: 8px;
    text-align: left;
}
th {
    background-color: #f2f2f2;
}

```

### 4. **Getting Feedback with a Form**

To create a form, use the `<form>` tag along with various input elements.

**Basic Form Example:**

```html
<form action="submit_form.php" method="post">
    <label for="name">Name:</label>
    <input type="text" id="name" name="name" required>
    <br>
    <label for="email">Email:</label>
    <input type="email" id="email" name="email" required>
    <br>
    <label for="message">Message:</label>
    <textarea id="message" name="message" rows="4" cols="50" required></textarea>
    <br>
    <input type="submit" value="Submit">
</form>

```

- **`action`**: URL of the server-side script to handle form submission.
- **`method`**: HTTP method used to send form data (`get` or `post`).
- **`required`**: Attribute to make a field mandatory.

### 5. **Designing a Form**

Enhance your form with various input types, labels, and styles.

**Example Form with Multiple Inputs:**

```html
<form action="submit_form.php" method="post">
    <fieldset>
        <legend>Personal Information</legend>

        <label for="name">Name:</label>
        <input type="text" id="name" name="name" placeholder="John Doe" required>
        <br>

        <label for="gender">Gender:</label>
        <select id="gender" name="gender">
            <option value="male">Male</option>
            <option value="female">Female</option>
            <option value="other">Other</option>
        </select>
        <br>

        <label for="dob">Date of Birth:</label>
        <input type="date" id="dob" name="dob">
        <br>

        <label for="subscribe">Subscribe to newsletter:</label>
        <input type="checkbox" id="subscribe" name="subscribe">
        <br>

        <input type="submit" value="Submit">
    </fieldset>
</form>

```

- **`<fieldset>`**: Groups related elements within a form.
- **`<legend>`**: Provides a caption for the `<fieldset>`.
- **`<select>`**: Creates a drop-down list.
- **`<input type="date">`**: Allows the user to select a date.

### 6. **Getting the Data Back**

To process the form data and get feedback, you need server-side scripting (e.g., PHP, Node.js) to handle the data submission. The `action` attribute in the `<form>` tag specifies the URL where the form data will be sent.

**PHP Example (`submit_form.php`):**

```php
<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $name = htmlspecialchars($_POST['name']);
    $email = htmlspecialchars($_POST['email']);
    $message = htmlspecialchars($_POST['message']);

    // Process the data (e.g., save to database, send an email)
    echo "Thank you, $name. We have received your message.";
}
?>

```

- **`htmlspecialchars()`**: Protects against XSS attacks by escaping special characters.

### 7. **Splitting Images into Frames**

Splitting images into frames can be done using CSS for creating image galleries or frames. For advanced splitting, you might need to manually edit the image in an image editor and then use CSS to display the frames.

**Example Using CSS for Image Frames:**

```html
<div class="image-frame">
    <img src="part1.jpg" alt="Part 1" class="frame-part">
    <img src="part2.jpg" alt="Part 2" class="frame-part">
    <img src="part3.jpg" alt="Part 3" class="frame-part">
</div>

```

**CSS Example:**

```css
.image-frame {
    display: flex;
    gap: 10px; /* Space between frames */
}

.frame-part {
    width: 100px; /* Width of each image part */
    height: auto; /* Maintain aspect ratio */
}

```

- **`display: flex;`**: Aligns images horizontally.
- **`gap`**: Adds space between frames.

### Summary

- **Including Images**: Use the `<img>` tag to add images to your page.
- **Creating Lists**: Use `<ul>` and `<ol>` tags for unordered and ordered lists.
- **Tables**: Use `<table>`, `<tr>`, `<td>`, and `<th>` to organize data.
- **Forms**: Use `<form>` and various input elements to collect user feedback.
- **Server-Side Processing**: Handle form data with server-side scripts.
- **Image Frames**: Split images using CSS or image editors for display purposes.

These techniques will help you create a well-structured, interactive, and visually engaging web page.