(prin1 (let ((n (read))) 
    (+ (mod n 10) (mod (floor n 10) 10) (mod (floor n 100) 10))
))
