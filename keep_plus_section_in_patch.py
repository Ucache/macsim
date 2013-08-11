import sys
class keep_patch:
    def __init__(self,filename):
        self.keep = []
        self.keepos = 0
        self.pos = 1
        self.start = -1
        self.end = self.start
        self.minus = 0
        self.sign = 0
        self.plus =0
        self.setstart = False
        self.setend = False
        #self.openfile = open(filename,'r')
        self.filename = filename

    def reset(self):
        self.minus = 0
        self.sign = 0
        self.plus =0
        self.setstart = True 
        self.setend = False
        self.start = self.end
        self.end = -1

    def process(self):
       openfile = open(self.filename,'r')
       for line in openfile:
            if self.setstart:
                if line[0] == '-' and line[1] != '-':
                    self.minus +=1
                if line[0] == '!':
                    self.sign +=1
                if line[0] == '+':
                    self.plus +=1
            else:
                print line,
            if len(line) > 5 and line[3] == '*':
                if self.setstart:
                    self.end = self.pos
                    self.setend = True
                else :
                    #print line
                    self.start = self.pos
                    self.setstart = True
            if self.setstart and self.setend:
               # print "start and end set to ",self.start," ",self.end
                #print line
                #print self.minus,self.sign,self.plus
                if self.minus == 0 and  self.sign == 0 and self.plus >= 0:
                    #print "copy from ",self.start," to ",self.end
                    self.copy(self.start,self.end)
                   # self.keep[self.keepos] = self.start
                   # self.keepos += 1
                   # self.keep[self.keepos] = self.end
                   # self.keepos += 1
                    self.reset()
                else:
                    self.reset()
            self.pos += 1
        #copy(self.keep)
    def copy(self,start,end):
        openfile = open(self.filename,'r')
        pos = 0
        for line in openfile:
            pos+=1
            if pos >= start and pos <end:
                print line,
        openfile.close()

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print "give patch name"
    else:
        #print sys.argv[1]
        ins = keep_patch(sys.argv[1])
        ins.process()

