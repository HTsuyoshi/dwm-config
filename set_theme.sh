function select_theme() {
    local theme=""
    local options=$(ls $1)

    echo 'Select a theme:'
    echo -n '    '
    echo $options
    echo ''
    echo -n 'theme:'
    echo ''
    read theme
    echo ''
    echo "$theme choosed!"
    echo ''

    [[ -f ./dwm-themes/$theme ]] && \
        (cp ./dwm-themes/$theme ./dwm/colors.h && \
        echo 'Sucessful changed theme') || echo 'Changed failed'
}

function set_dwm_theme() {
    select_theme dwm-themes
}

function set_themes() {
    set_dwm_theme
}

set_themes
