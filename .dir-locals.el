(setq-default dotspacemacs-configuration-layers
                '((cmake :variables cmake-enable-cmake-ide-support t)))

((c++-mode (helm-make-build-dir . "build/")))
