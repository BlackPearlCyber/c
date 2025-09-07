```markdown
# Git Commands Guide

## Syncing GitHub Updates in Git

To sync updates from the GitHub repository to your local machine, use the following commands:

```
git fetch
git merge origin/main
```

---

## Committing Changes Locally

To commit changes in your local Git repository, use:

```
git commit -m "message you want for that"
```

---

## Pushing Code to GitHub Repository

After completing your code changes on your local machine, follow these steps to push the changes to the GitHub repository:

1. Add files to staging area:

```
git add .
```

or, to add a specific file:
git add filename
Example:

git add First.c
```

2. Commit the changes with a message:

```
git commit -m "commit message as you need"
```

3. Push the changes to the remote repository:

```
git push origin main
```

or 

if pushing to a specific branch:

```
git push origin your_branch_name
```

---

## Ignoring Files with .gitignore

If you run code or generate files (e.g., executables) on your local machine that you do **not** want to push to GitHub, use a `.gitignore` file to exclude them.

### Steps to create and use `.gitignore`:

1. Create a `.gitignore` file in your project root.

```
For Linux:

nano .gitignore
```

2. Inside the `.gitignore` file, list the filenames or directories you want Git to ignore, one per line.

Example:

```
var
*.exe
temp/
```

- Note: File and directory names in `.gitignore` are case-sensitive.
- You can list multiple files or folders to ignore.

3. After updating `.gitignore`, commit it to your repository:

```
git add .gitignore
git commit -m "Add .gitignore to exclude specified files"
git push origin main
```

This ensures the listed files are ignored by Git and won’t be pushed to the remote repository.

---

This guide helps you manage syncing, committing, pushing, and ignoring files effectively with Git and GitHub.


