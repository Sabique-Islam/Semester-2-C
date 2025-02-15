# To Delete Unnecessary Pages

## Create a Virtual Environment (best practice)
 
1. **Navigate to project folder**  
```
python -m venv filtering
```

2. **Activate the virtual environment**
```
filtering\Scripts\activate
```

3. **Install dependencies**
```
pip install pypdf
```

4. **Add Keywords to Remove**
* Modify the "remove" list to include the words you want to filter out.

5. **Run the script**
``` 
python filter.py 
```