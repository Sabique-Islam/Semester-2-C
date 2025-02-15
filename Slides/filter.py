from pypdf import PdfReader, PdfWriter

def remove_pages(inputpdf,output,remove):
    pdf = PdfReader(inputpdf)
    writer = PdfWriter()

    for i in range(len(pdf.pages)):
        page = pdf.pages[i]
        text = page.extract_text()

        if text and any(word.lower() in text.lower() for word in remove):
            print(f"Deleting page {i+1}")
        else:
            writer.add_page(page)

    with open(output, "wb") as f:
        writer.write(f)

# Change as per use case
inputpdf = "Unit 1.pdf" 
output = "Unit 1 Filtered.pdf"
remove = ["Prof. Sindhu R Pai"] # Include all the keywords on the pages to be removed.

remove_pages(inputpdf,output,remove)