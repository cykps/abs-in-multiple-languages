(let (
  (n (read))
  (a (read))
  (b (read))
  (res 0)
)

  (dotimes (i n)
    (let ((sum (+ 
      (mod (floor (+ i 1) 1) 10)
      (mod (floor (+ i 1) 10) 10)
      (mod (floor (+ i 1) 100) 10)
      (mod (floor (+ i 1) 1000) 10)
      (mod (floor (+ i 1) 10000) 10)
    )))
      (if (and (<= a sum) (<= sum b))
          (setq res (+ res (+ i 1)))

      )
    )
  )
  (prin1 res)
)
