ifarm1401> pwd
... Testfiles/GitTest
ifarm1401> git clone https://github.com/KrishnaAdhikari/TestRepo
Cloning into TestRepo...
remote: Counting objects: 15, done.
remote: Compressing objects: 100% (11/11), done.
remote: Total 15 (delta 2), reused 12 (delta 1), pack-reused 0
Unpacking objects: 100% (15/15), done.
ifarm1401> ls
TestRepo
ifarm1401> cd TestRepo/
ifarm1401> ls
README.md  Readme.txt
ifarm1401> cp ../../TestCpp/timeAndColorOpStuff.cpp .
ifarm1401> ls
ReadmeJlabRelated.txt  README.md  Readme.txt  timeAndColorOpStuff.cpp
ifarm1401> git add timeAndColorOpStuff.cpp 
ifarm1401> ls
ReadmeJlabRelated.txt  README.md  Readme.txt  timeAndColorOpStuff.cpp
ifarm1401> git add *
ifarm1401> git status
# On branch master
# Changes to be committed:
#   (use "git reset HEAD <file>..." to unstage)
#
#       new file:   ReadmeJlabRelated.txt
#       new file:   timeAndColorOpStuff.cpp
#
 git commit -m "Just another commit test. This time from JLab machine"
[master 6efd7c2] Just another commit test. This time from JLab machine
 Committer: Krishna Adhikari <adhikari@ifarm1401.jlab.org>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly:

    git config --global user.name "Your Name"
    git config --global user.email you@example.com

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 2 files changed, 66 insertions(+), 0 deletions(-)
 create mode 100644 ReadmeJlabRelated.txt
 create mode 100644 timeAndColorOpStuff.cpp
ifarm1401>  git config --global user.name "KrishnaAdhikari"
ifarm1401> git config --global user.email "adhikari_kp@hotmail.com"
ifarm1401> git commit -m "Just another commit test. This time from JLab machine"
# On branch master
# Your branch is ahead of 'origin/master' by 1 commit.
#
# Untracked files:
#   (use "git add <file>..." to include in what will be committed)
#
#       #ReadmeJlabRelated.txt#
#       .#ReadmeJlabRelated.txt
nothing added to commit but untracked files present (use "git add" to track)
ifarm1401> git status
# On branch master
# Your branch is ahead of 'origin/master' by 1 commit.
#
# Changes not staged for commit:
#   (use "git add <file>..." to update what will be committed)
#   (use "git checkout -- <file>..." to discard changes in working directory)
#
#       modified:   ReadmeJlabRelated.txt
#
# Untracked files:
#   (use "git add <file>..." to include in what will be committed)
#
#       ReadmeJlabRelated.txt~
no changes added to commit (use "git add" and/or "git commit -a")
ifarm1401> git add *
ifarm1401> git commit -m "Just another commit test. This time from JLab machine"
[master 6e49876] Just another commit test. This time from JLab machine
 2 files changed, 74 insertions(+), 0 deletions(-)
 create mode 100644 ReadmeJlabRelated.txt~
ifarm1401> git push
Username: 
Password: 
error: The requested URL returned error: 403 Forbidden while accessing https://github.com/KrishnaAdhikari/TestRepo/info/refs

   (kp: I think I typed KPAdhikari instead of KrishnaAdhikari for username
        therefore, it showed error. When I typed it right, it worked. See below.)

fatal: HTTP request failed
ifarm1401> git push
Username: 
Password: 
Counting objects: 8, done.
Delta compression using up to 48 threads.
Compressing objects: 100% (7/7), done.
Writing objects: 100% (7/7), 3.04 KiB, done.
Total 7 (delta 1), reused 0 (delta 0)
To https://github.com/KrishnaAdhikari/TestRepo
   fca232a..6e49876  master -> master
ifarm1401>

